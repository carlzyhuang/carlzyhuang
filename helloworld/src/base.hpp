#include <string>

std::string get_string(int num)
{
    std::string ret = "";
    switch (num)
    {
    case 0:
        ret = "ok";
        break;
    case 1:
        ret = "server error";
        break;
    case 2:
        ret = "client error";
        break;
    default:
        ret = "unknown error";
        break;
    }
    return ret;
}
