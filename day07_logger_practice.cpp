#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

string getCurrentTime()
{
    time_t now = time(nullptr);

    tm* localTime = localtime(&now);

    stringstream ss;

    ss << localTime->tm_year + 1900 << "-"
       << setw(2) << setfill('0') << localTime->tm_mon + 1 << "-"
       << setw(2) << setfill('0') << localTime->tm_mday << " "
       << setw(2) << setfill('0') << localTime->tm_hour << ":"
       << setw(2) << setfill('0') << localTime->tm_min << ":"
       << setw(2) << setfill('0') << localTime->tm_sec;

    return ss.str();
}

int main()
{
    cout << getCurrentTime() << endl;

    return 0;
}