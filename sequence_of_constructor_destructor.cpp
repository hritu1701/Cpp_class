#include<iostream>
#include<string.h>
using namespace std;

class Base{
public:
Base()
{
cout<<"constructer of Base"<<endl;
}
~Base()
{
cout<<"destructor of Base"<<endl;
}
};

class Derived: public Base
{
public:
Derived()
{
cout<<"constructor of Derived class"<<endl;
}
~Derived()
{
cout<<"Destructor of Derived class"<<endl;
}

};

int main()
{
Derived d1;
}