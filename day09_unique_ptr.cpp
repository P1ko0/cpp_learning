#include <iostream>
#include <memory>

using namespace std;

class Device
{
    private:

    public:
    void start()
    {
        cout<<"Device started"<<endl;
    }
    void stop()
    {
        cout<<"Device stopped"<<endl;
    }
};

int main()
{
    unique_ptr<Device> devices=make_unique<Device>();
    devices->start();
    devices->stop();

    return 0;
}