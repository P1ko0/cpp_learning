#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    ofstream logfile("log.txt",ios::app);
    logfile<<"Device started"<<endl;
    logfile.close();

    return 0;
}