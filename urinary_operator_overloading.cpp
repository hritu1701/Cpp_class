#include<iostream>
using namespace std;

class A
{
    int arr[10];
    public:
    
A()
    {
        for(int i=0;i<10;i++)
        cin>>arr[i];
    }

void display()
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}

friend void operator++(A &a1);

};
void operator++(A &a1)
{
    for(int i=0;i<10;i++)
    {
        a1.arr[i]=a1.arr[i]+1;
    }
}

int main()
{
    A a1;
    a1.display();

    ++a1;
    a1.display();
}