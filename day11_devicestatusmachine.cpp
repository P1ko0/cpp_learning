#include <iostream>
#include <string>

using namespace std;

class Device
{
    private:
    string status="Idle";

    public:
    void start()
    {
        if(status=="Idle")
        {
            cout<<"Device started"<<endl;
            status="Running";
        }
        else
        cout<<"Invalid"<<endl;
    }

    void stop()
    {
        if(status=="Running")
        {
            cout<<"Device stopped"<<endl;
            status="Stopped";
        }
        else
        cout<<"Invalid"<<endl;
    }

    void reset()
    {
        if(status=="Stopped"||status=="Fault")
        {
            cout<<"Device reset"<<endl;
            status="Idle";
        }
        else
        cout<<"Invalid"<<endl;
    }

    void fault()
    {
        cout<<"Device fault"<<endl;
        status="Fault";
    }

    void showstatus()
    {
        cout<<status<<endl;
    }
};

int main()
{
    Device d1;
    d1.showstatus();
    d1.start();
    d1.showstatus();
    d1.start();
    d1.showstatus();
    d1.fault();
    d1.showstatus();
    d1.start();
    d1.showstatus();
    d1.reset();
    d1.showstatus();
    d1.stop();
    d1.showstatus();
    d1.start();
    d1.showstatus();
    d1.stop();
    d1.showstatus();
    d1.reset();
    d1.showstatus();

    return 0;
}