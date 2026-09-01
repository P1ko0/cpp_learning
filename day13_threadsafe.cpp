#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

int temp = 25;
int speed = 2500;
mutex mtx;

void updateData()
{
    for(int i = 0;i < 5;i++)
    {
        {
            lock_guard<mutex> lock(mtx);
            temp++;
            speed += 100;
        }
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

int main()
{
    thread t(updateData);

    for(int i = 0;i < 5;i++)
    {
        {
            lock_guard<mutex> lock(mtx);
            cout << "Temperature:" << temp << endl;
            cout << "Speed:" << speed << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    t.join();

    return 0;
}