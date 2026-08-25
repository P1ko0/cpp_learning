#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    time_t now=time(nullptr);
    tm* localTime=localtime(&now);
    cout 
    << localTime->tm_year + 1900 << "-"
    << setw(2) << setfill('0') << localTime->tm_mon + 1 << "-"
    << setw(2) << setfill('0') << localTime->tm_mday << " "
    << setw(2) << setfill('0') << localTime->tm_hour << ":"
    << setw(2) << setfill('0') << localTime->tm_min << ":"
    << setw(2) << setfill('0') << localTime->tm_sec
    << endl;

    return 0;
}