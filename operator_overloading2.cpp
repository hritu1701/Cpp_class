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
friend void operator<< (ostream&,complex_number&);

};

void operator<< (ostream &cout,complex_number &z)
{
    if(z.b>0)
    {
    cout<<z.a<<"+i"<<z.b<<endl;
    }
    else
    cout<<z.a<<"-i"<<z.b<<endl;

}

int main()
{
    complex_number x,y;
    x.input();
    y.input();

    complex_number z = x+y;
    cout<<z;
}