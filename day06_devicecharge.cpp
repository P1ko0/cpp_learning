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
        cout<<endl;
    }
    int getstatus()
    {
        return status;
    }
};

int main()
{
    int num;
    int delet;
    int choice;
    bool exit=0;

    map<int,Device> devices;

    devices.emplace(1001,Device("crane01",1,2500,25));
    devices.emplace(1002,Device("crane02",0,2700,65));
    devices.emplace(1003,Device("crane03",1,1900,15));

while(!exit)
{
    cout<<"=====Device manager====="<<endl;
    cout<<"==1.Show all devices  =="<<endl;
    cout<<"==2.Find device       =="<<endl;
    cout<<"==3.Dlete device      =="<<endl;
    cout<<"==4.Count status      =="<<endl;
    cout<<"==0.Exit              =="<<endl;
    cout<<"Please choose:";
    cin>>choice;

    switch (choice)
    {
    case 1:
    cout<<"All here:"<<endl;
    for(auto it=devices.begin();it!=devices.end();it++)
    {
        cout<<"ID:"<<it->first<<endl;
        it->second.showInfo();
    }
    break;

    case 2:
    {
    cout<<"Input your device:";
    cin>>num;
    auto it=devices.find(num);
    if(it!=devices.end())
    {
        cout<<"Founded!"<<endl;
        cout<<"ID:"<<it->first<<endl;
        it->second.showInfo();
    }
    else
    cout<<"Invalid num"<<endl;
    break;
    }

    case 3:
    {
        cout<<"Input to delet:";
        cin>>delet;
        auto it=devices.find(delet);
        if(it!=devices.end())
        {
            cout<<"Deleted!"<<endl;
            devices.erase(it->first);
        }
        else
        cout<<"Invalid delet"<<endl;
        break;
    }

    case 4:
    {
        int normal=0;
        int fault=0;
        for(auto it=devices.begin();it!=devices.end();it++)
        {
            if(it->second.getstatus()==1)
            normal++;
            else
            fault++;
        }
        cout<<"normal:"<<normal<<endl;
        cout<<"fault:"<<fault<<endl;
        break;
    }


    case 0:
    cout<<"See you"<<endl;
    exit=1;
    break;

    default:
    cout<<"Invalid choice"<<endl;
    break;
    }
}

    return 0;
}