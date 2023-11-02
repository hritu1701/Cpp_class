#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    int b;
};

int main()
{
    // A* p=new A();
    // cin>>p->a>>p->b;
    // cout<<p->b<<p->a;

    A &a=*(new A());
    cin>>a.a>>a.b;
    cout<<a.b<<a.a;

}