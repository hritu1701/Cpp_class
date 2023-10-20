#include<iostream>

using namespace std;

class A{
private:
int a;
protected:
int b;
public:
int c;
};

class B: private A
{
int d,e,f;
public:

void input()
{
cin>>b>>c>>d>>e>>f;
}

void display()
{
cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
}
};

int main()
{
B b1;
b1.input();
b1.display();
}