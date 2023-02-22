#ifndef PITAYA_UTILS_H
#define PITAYA_UTILS_H

#include "pitaya.h"

#include "spdlog/logger.h"

#include <string>
#include <thread>

#ifdef WIN32
#include <windows.h>
extern std::wstring to_ws(const std::string& str);
#endif

namespace pitaya {
namespace utils {

std::string GetUserKickTopic(const std::string& userId, const std::string& serverType);

std::string GetUserMessagesTopic(const std::string& userId, const std::string& serverType);

std::string GetTopicForServer(const std::string& serverId, const std::string& serverType);

Server RandomServer(const std::vector<Server>& vec);

bool ParseEtcdKey(const std::string& key,
                  const std::string& etcdPrefix,
                  const std::vector<std::string>& serverTypeFilters,
                  std::string& serverType,
                  std::string& serverId);

std::shared_ptr<spdlog::logger> CloneLoggerOrCreate(const char* loggerNameToClone,
                                                    const char* loggerName);


inline void SetThreadName(const char* name, std::shared_ptr<spdlog::logger> log)
{
#ifdef linux
    log->debug("Setting thread name for linux to {}", name);
    // Under linux we give the thread a name for debugging purposes.
    // There are no cross platform ways of doing that.
    char buf[16];
    size_t bufLen = 15;
    strncpy(buf, name, bufLen);
    buf[bufLen] = '\0';
    int res = pthread_setname_np(pthread_self(), buf);
    if (log && res) {
        log->error("Failed to set thread name");
    }
#elif _WIN32
	log->debug("Setting thread name for windows to {}", name);
	HRESULT hr = SetThreadDescription(GetCurrentThread(), to_ws(name).c_str());
	if (FAILED(hr))
	{
		log->error("UNABLE TO SET WINDOWS THREAD NAME TO {}", name);
}
#else
    log->debug("Setting thread name for macosx to {}", name);
    pthread_setname_np(name);
#endif
}

} // namespace utils
} // namespace pitaya
extern std::wstring to_ws(const std::string& key);
extern std::string to_s(const std::wstring& text);
#endif // PITAYA_UTILS_H
