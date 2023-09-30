#include<iostream>
using namespace std;

class A
{
    int arr[10];

public:
    A()
    {
        for(int i = 0; i < 10; i++)
            cin>>arr[i];
    }

    void display()
    {
        for(int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout<<endl;
    }

   void  operator++ ()
    {
        for(int i = 0; i < 10; i++)
        {
            arr[i] = arr[i] + 1;
        }
        
    }
};

int main()
{
    A a1;
    a1.display();
    ++a1;
    ++a1;
    ++a1;
    a1.display();
}

