#include<iostream>
using namespace std;

class complex_number
{
    int a,b;
    public:
    void input()
    {
        cout<<"Enter first number: "<<endl;
        cin>>a;

        cout<<"Enter second number: "<<endl;
        cin>>b;
    }

    complex_number operator+(complex_number &r)       //Operator overloading
    {
        complex_number temp;
        temp.a=this->a + r.a;
        temp.b=this->b + r.b;
        
        return temp;

    }
    void display()
    {
        cout<<"Complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main()
{
    complex_number x,y;
    x.input();
    y.input();

    complex_number z = x+y;
    z.display();
}