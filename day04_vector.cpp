#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string newname;
    int newstatus;
    bool namesearch=0;
    string target;
    vector<int> status={1,0,1};
    vector<string> names={"crane01","crane02","crane03"};
    for(int i=0;i<status.size();i++)
    {
        cout<<"device:"<<names[i]<<","<<"status:"<<status[i]<<endl;
    }
    status.push_back(1);
    names.push_back("crane04");
    cout<<"input thenewname:"<<endl;
    cin>>newname;
    cout<<"input the newstatus"<<endl;
    cin>>newstatus;
    names.push_back(newname);
    status.push_back(newstatus);
    cout<<"added"<<endl;
    for(int i=0;i<status.size();i++)
    {
        cout<<"device:"<<names[i]<<","<<"status:"<<status[i]<<endl;
    }
    cout<<"give the name to delet:";
    cin>>target;
    for(int i=0;i<names.size();i++)
    {
        if(target==names[i])
        {
            cout<<"found!"<<endl<<"device:"<<names[i]<<endl<<"status:"<<status[i]<<endl;
            namesearch=1;
            names.erase(names.begin()+i);
            status.erase(status.begin()+i);
            break;
        }
    }
    if(!namesearch)
    cout<<"notfound!"<<endl;
    cout<<"after delet:"<<endl;
    for(int i=0;i<status.size();i++)
    {
        cout<<"device:"<<names[i]<<","<<"status:"<<status[i]<<endl;
    }


    return 0;
}