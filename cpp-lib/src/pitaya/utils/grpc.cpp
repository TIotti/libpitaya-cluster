#include "pitaya/utils/grpc.h"

#include "pitaya/constants.h"

#include "spdlog/fmt/fmt.h"

#include <cpprest/json.h>


extern std::wstring to_ws(const std::string& key);
extern std::string to_s(const std::wstring& text);

namespace pitaya {
namespace utils {

std::string
GetGrpcAddressFromServer(const Server& server)
{
    if (server.Metadata() == "") {
        throw PitayaException(
            fmt::format("Ignoring server {}, since it does not support gRPC", server.Id()));
    }

    try {
        auto metadataJson = web::json::value::parse(server.Metadata());
        if (!metadataJson.is_object()) {
            throw PitayaException(
                fmt::format("Metadata from server is not a json object: {}", server.Metadata()));
        }

        auto metadataObj = metadataJson.as_object();

        auto hasHost = metadataObj.find(to_ws(constants::kGrpcHostKey).c_str()) != metadataObj.cend() &&
            metadataObj[to_ws(constants::kGrpcHostKey).c_str()].as_string() != L"";

        if (!hasHost) {
            throw PitayaException("Did not receive a host on server metadata");
        }

        auto hasPort =
            metadataObj.find(to_ws(constants::kGrpcPortKey).c_str()) != metadataObj.cend() &&
            metadataObj[to_ws(constants::kGrpcPortKey).c_str()].as_string() != L"";

        if (!hasPort) {
            throw PitayaException("Did not receive a port on server metadata");
        }

        auto host = metadataObj[to_ws(constants::kGrpcHostKey).c_str()].as_string();
        auto port = metadataObj[to_ws(constants::kGrpcPortKey).c_str()].as_string();

        return to_s(host + L":" + port);
    } catch (const web::json::json_exception& exc) {
        throw PitayaException(
            fmt::format("Failed to parse metadata json from server: error = {}, json string = {}",
                        exc.what(),
                        server.Metadata()));
    }
}

} // namespace utils
} // namespace pitaya
