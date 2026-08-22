#include <iostream>

using namespace std;

bool checkspeed(double speed){
    return 0<=speed&&speed<=3000;
}

bool checktemp(double temp){
    return 0<=temp&&temp<=80;
}

int main(){
    double speed;
    double temp;
    int i=0;
    cout<<"give the speed:";
    cin>>speed;
    cout<<"give the temp:";
    cin>>temp;
    if(!checkspeed(speed)){
        i++;
        cout<<"speed of device is wrong"<<endl;
    }
    else
    cout<<"speed of device is normal"<<endl;
    if(!checktemp(temp)){
        i++;
        cout<<"temp of device is wrong"<<endl;
    }
    else
    cout<<"temp of device is normal"<<endl;
    if(i==0)
    cout<<"equipment parameters are normal"<<endl;
    else
    cout<<"equipment parameters are wrong"<<endl;
    return 0;
}