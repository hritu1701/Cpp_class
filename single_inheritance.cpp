#include<iostream>
using namespace std;

class A
{
 protected:
    int x;

public:

void display1()
{
    cout<<"The value of x is: "<<x<<endl;
}
};

class B : public A
{
private:
    int y;

public:
    void getdata()
    {
        cout<<"Enter the value of x&y: "<<endl;
        cin>>x>>y;
    }

    void display2()
    {
        cout<<"The value of y is: "<<y<<endl;
    }
    void add()
    {
      cout<<"Sum of x&y is: "<<x+y<<endl;
    }
};

int main()
{
    B b1;
    b1.getdata();
    b1.display1();
    b1.display2();
    b1.add();
    
}