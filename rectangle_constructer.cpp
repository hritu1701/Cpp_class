#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;
    public:
    Rectangle()
    {
        cout<<"Enter length: "<<endl;
        cin>>length; 
        cout<<"Enter width: "<<endl;
        cin>>width;
    }
    long area()
    {
        return length*width;
    }
};
int main()
{
    Rectangle r1;
    cout<<"The area is: "<<r1.area();
}