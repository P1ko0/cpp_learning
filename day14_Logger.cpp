#include "day14_Logger.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <iomanip>

using namespace std;

string GetTime()
{
    time_t now = time(nullptr);
    tm* LocalTime = localtime(&now);

    stringstream ss;

    ss << LocalTime->tm_year+1900 << "-" 
    << setw(2) << setfill('0') << LocalTime->tm_mon+1 <<"-"
    << setw(2) << setfill('0') << LocalTime->tm_mday <<" "
    << setw(2) << setfill('0') << LocalTime->tm_hour <<":"
    << setw(2) << setfill('0') << LocalTime->tm_min <<":"
    << setw(2) << setfill('0') << LocalTime->tm_sec;

    return ss.str();
}

void Logger::write(const string& message)
{
    ofstream Lf("Logger_file.txt",ios::app);
    if(!Lf.is_open())
    {
        cout<<"Fail to open!"<<endl;
        return;
    }

    Lf << "[" <<GetTime() << "]"
    << message <<endl;

    Lf.close();
}