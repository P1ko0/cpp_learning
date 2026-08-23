#include <iostream>
#include <string>
#include <vector>

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
};

int main()
{
    vector<Device> devices={{"crane01",1,2500,25},{"crane02",0,5000,100}};
    devices[1].setSpeed(2800);
    devices.push_back({"crane03",1,2000,30});
    devices[2].setSpeed(3200);
    for(int i=0;i<devices.size();i++)
    {
        devices[i].showInfo();
    }

    return 0;
}