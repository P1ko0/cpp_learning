#include <iostream>

using namespace std;

int main()
{
    int speed = 2500;

    int *p = &speed;
    *p=3000;

    cout << speed << endl;
    cout << &speed << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}