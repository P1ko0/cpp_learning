#include "day14_Simulator.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int temp = 25;
int speed = 3000;

void Simulator::run()
{
    for(int i = 0;i < 5;i++)
    {
        cout<< "Temperature:" << temp <<endl;
        cout<< "Speed:" << speed <<endl;

        temp++;
        speed += 100;
        
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}