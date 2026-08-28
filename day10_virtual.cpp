#include <iostream>

using namespace std;

class Basedevice
{
    public:
    virtual void start() = 0;
};

class Motor : public Basedevice
{
    public:
    void start() override
    {
        cout<<"Motor started"<<endl;
    }
};

class Sensor : public Basedevice
{
    public:
    void start() override
    {
        cout<<"Sensor started"<<endl;
    }
};

int main()
{
    Motor m1;
    Sensor s1;
    m1.start();
    s1.start();

    Basedevice* d1 = &m1;
    Basedevice* d2 = &s1;
    d1->start();
    d2->start();

    return 0;
}