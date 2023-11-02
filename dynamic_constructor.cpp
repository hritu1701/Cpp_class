#include<iostream>
using namespace std;
class example
{
    int num1;
    int num2;
    int *ptr;

    public:
    example()
    {
        num1=0;
        num2=0;
        ptr=new int;
        *ptr=0;
    }

        example(int x,int y,int z)
        {
            num1=x;
            num2=y;
            ptr=new int;
            *ptr=z;
        }

        void display()
        {
            cout<<num1<<" "<<num2<<" "<<ptr<<endl;

        }
};

int main()
{
    example obj1;
    obj1.display();
    example obj2(3,5,11);
    obj2.display();
}