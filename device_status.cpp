#include "Logger.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string device01;
    string device02;
    string device03;

    cout << "Enter device01 status: ";
    cin >> device01;

    cout << "Enter device02 status: ";
    cin >> device02;

    cout << "Enter device03 status: ";
    cin >> device03;

    cout << endl;
    cout << "===== Device Status =====" << endl;

    cout << "Device 1: " << device01 << endl;
    if(device01=="running")
    Logger::write("running");
    else
    Logger::write("stoped");
    cout << "Device 2: " << device02 << endl;
    if(device02=="running")
    Logger::write("running");
    else
    Logger::write("stoped");
    cout << "Device 3: " << device03 << endl;
    if(device03=="running")
    Logger::write("running");
    else
    Logger::write("stoped");

    return 0;
}