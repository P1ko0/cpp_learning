#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Device
{
    string name;
    int status;
    double speed;
    double temp;
};

int main()
{
    Device d1;

    d1.name="crane04";
    d1.status=1;
    d1.speed=2000;
    d1.temp=25;

    cout<<"device_status"<<endl;
    cout<<"name:"<<d1.name<<endl<<"status:"<<d1.status<<endl<<"speed:"<<d1.speed<<endl<<"temp:"<<d1.temp<<endl;

    vector<Device> devices={{"crane01",1,2500,25},
    {"crane02",0,0,30},
    {"crane03",1,1800,40}};
    devices.push_back(d1);
    for(int i=0;i<devices.size();i++)
    {
        cout << devices[i].name << " "
         << devices[i].status << " "
         << devices[i].speed << " "
         << devices[i].temp << endl;
    }

    return 0;
}