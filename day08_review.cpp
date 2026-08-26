#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Logger.h"

using namespace std;

int main()
{
    vector<string> devices(3);
    
    for(int i=0;i<3;i++)
    {
        cout<<"Input device0"<<i+1<<"status:";
        cin>>devices[i];
        Logger::write(devices[i]);
    }

    for(int i=0;i<3;i++)
    {
        cout<<"device0"<<i+1<<":"<<devices[i]<<endl;
        if(devices[i]=="fault")
        cout<<"Warning: device0"<<i+1<<"fault!"<<endl;
    }

    return 0;
}