#include "functions.h"
#include <string>

string getRandomId() {
    time_t rawtime;
    struct tm * timeinfo;
    string result;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    result = std::to_string(timeinfo->tm_year);
    result += std::to_string(timeinfo->tm_mon);
    result += std::to_string(timeinfo->tm_mday);
    result += std::to_string(timeinfo->tm_hour);
    result += std::to_string(timeinfo->tm_min);
    result += std::to_string(timeinfo->tm_sec);

    return result;
}
