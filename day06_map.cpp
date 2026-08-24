#include <iostream>
#include <map>
#include <string>

using namespace std;

class Device
{
    private: 
    string name;
    int status;
    double speed;
    double temp;
    
    public:
    Device(string n,int s,double sp,double t)
    {
        name=n;
        status=s;
        setSpeed(sp);
        setTemp(t);
    }
    void setSpeed(double sp)
    {
        if(sp>=0&&sp<=3000)
        {
            speed=sp;
        }
        else
        {
            speed=0;
            cout<<"invalid speed"<<endl;
        }
    }
    void setTemp(double t)
    {
        if(t>=0&&t<=80)
        {
            temp=t;
        }
        else
        {
            temp=0;
            cout<<"invalid temp"<<endl;
        }
    }
    void showInfo()
    {
        cout<<"device:"<<name<<endl;
        cout<<"status:"<<status<<endl;
        cout<<"speed:"<<speed<<endl;
        cout<<"temp:"<<temp<<endl;
    }
    int getstatus()
    {
        return status;
    }
};

int main()
{
    map<int, Device> devices;

    devices.emplace(1001, Device("crane01", 0, 2500, 25));
    devices.emplace(1002, Device("crane02", 0, 3500, 55));
    devices.emplace(1003, Device("crane03", 1, 3500, 85));
    int num;
    int delet;
    int normal=0;
    int fault=0;

    cout<<"input delet ID:";
    cin>>delet;
    auto it=devices.find(delet);
    if(it!=devices.end())
    {
        cout<<"delet founded!"<<endl;
        devices.erase(it->first);
    }
    else
    cout<<"cannot find your delet"<<endl;

    /*devices.at(1001).showInfo();
    devices.at(1003).showInfo();

    cout<<devices.at(1001).getstatus()<<endl;
    */

    for(auto it = devices.begin(); it != devices.end(); it++)
    {
        cout << "ID:" << it->first << endl;
        it->second.showInfo();
    }

    /*for(auto it=devices.begin();it!=devices.end();it++)
    {
        if(it->second.getstatus()==1)
        normal++;
        else
        fault++;
    }

    cout<<"normal:"<<normal<<endl;
    cout<<"fault:"<<fault<<endl;

    cout << "before: " << devices.size() << endl;
    cout<<"input your number:";
    cin>>num;
    auto it = devices.find(num);
    if(it != devices.end())
    {
        cout<<"found!"<<endl;
        cout << "ID: " << it->first << endl;
        it->second.showInfo();
    }
    else
    {
        cout << "not found!" << endl;
    }
    cout << "after: " << devices.size() << endl;
    */

    return 0;
}