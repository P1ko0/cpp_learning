#include<fstream>
#include<iostream>
#include<sstream>
#include<ctime>
#include<iomanip>

using namespace std;

string getTime()
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
    ofstream file("device_log.csv", ios::app);

if (!file.is_open())
{
    cout << "Failed to open file." << endl;
    return 1;
}

file << getTime() << ","
     << "Device1" << ","
     << "fault"
     << endl;
}