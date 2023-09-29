#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"Object is created"<<endl;
    }
    ~A()
    {
        cout<<"Object is destroyed"<<endl;
    }
};
int main()
{
    A a1,a2,a3,a4;
}