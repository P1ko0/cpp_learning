#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void collectData()
{
    int temp=25;
    int speed=500;
    for(int i=0;i<5;i++)
    {
        cout<<"Temperature:"<<temp<<endl;
        cout<<"Speed:"<<speed<<endl;
        temp++;
        speed +=100;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

int main()
{
    thread t(collectData);
    t.join();

    return 0;
}