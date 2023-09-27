#include <iostream>
using namespace std;

class A{
public:

A()
{
cout<<"object is created successfully"<<endl;
}

A(int a)
{
cout<<"object created with value "<<a<<endl;
}

A(float f)
{
cout<<"object created with float value "<<f<<endl;
}

};

int main()
{
A a1;
A a2(45);
A a3(4.55f);
return 0;
}