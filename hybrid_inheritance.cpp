#include<iostream>
using namespace std;

class Staff
{
    protected:
    int code,name;

    public:
        void getinfo()
        {
            cout<<"Enter code: "<<endl;
            cin>>code;

            cout<<"Enter name: "<<endl;
            cin>>name;
        }
};