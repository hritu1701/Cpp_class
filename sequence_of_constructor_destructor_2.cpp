#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:

        A(int a,int b)
        {
            cout<<"Base class constructor with values "<<a<<" "<<b<<endl;
        }

        ~A()
        {
            cout<<"destructor is being called"<<endl;
        }
};

class B : public A
{
    public:

        B(int p,int q,int a,int b) : A(a,b)    // For passing values of base class
        {
            cout<<"Derived class constructor with values "<<p<<" "<<q<<endl;
        }

        ~B()
        {
            cout<<"destructor is being called"<<endl;
        }
};

int main()

{
    B b1(3,4,5,6);

    return 0;
}