#include "pitaya.h"

#include <boost/algorithm/string.hpp>
#include <cpprest/json.h>

#include <string>
#include <locale>
#include <codecvt>
#include <cassert>

namespace json = web::json;

 /* std::wstring
to_ws(const std::string& key)
{
    std::wstring text_wchar(key.size(), L'#');
    mbstowcs(&text_wchar[0], key.c_str(), key.size());
    return text_wchar;
}

 std::string
to_s(const std::wstring& text)
{
    return utility::conversions::to_utf8string(text);
}*/

 std::wstring
to_ws(const std::string& str)
{
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.from_bytes(str);
}

std::string
to_s(const std::wstring& wstr)
{
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.to_bytes(wstr);
}

std::string
to_utf8(const std::string& str)
{   
    /* json::value js = json::value::object();
    js[L"grpcHost"] = json::value::string(L"127.0.0.1");
    js[L"grpcPort"] = json::value::string(L"3434");
    js[L"matchId"] = json::value::string(L"");
    js[L"region"] = json::value::string(L"na");
    return to_s(js.serialize());*/
    return utility::conversions::to_utf8string(to_ws(str));
    
}

pitaya::Server&
pitaya::Server::WithMetadata(const std::string& key, const std::string& val)
{
    json::value metadataJson;
    if (_metadata.empty()) {
        metadataJson = json::value::object();
    } else {
        metadataJson = json::value::parse(_metadata);
    }

    if (!metadataJson.is_object()) {
        throw new PitayaException("Server metadata is not an object");
    }
    std::wstring text_wchar = to_ws(key);   

    metadataJson[text_wchar.c_str()] = json::value::string(to_ws(val));

    _metadata = to_s(metadataJson.serialize());

    return *this;
}

pitaya::Route::Route(const std::string& route_str)
{
    std::vector<std::string> strs;
    boost::split(strs, route_str, boost::is_any_of("."));
    if (strs.size() < 3) {
        throw PitayaException("error parsing route");
    }
    server_type = strs[0];
    handler = strs[1];
    method = strs[2];
};
