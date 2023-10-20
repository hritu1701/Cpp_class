#include<iostream>
using namespace std;

class X
{
    protected:
        int a;
    public:
        void getdataX()
        {
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
        }
};

class Y : private X
{
    private:
        int b;
    public:
        void getdataY()
        {
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }
};

class Z : private Y
{
    private:
        int c, result;
    public:
        void getdataZ()
        {
            cout<<"Enter the value of c: "<<endl;
            cin>>c;
        }
        void displaysum()
        {
            result = a + b + c;
            cout<<"The result is: "<<result<<endl;
        }
};

int main()
{
    Z z1;
    z1.getdataY();
    z1.getdataZ();
    z1.displaysum();

    return 0;
}