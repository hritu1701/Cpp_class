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
   void display()
   {
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
   }
};
int main()
{
    Rectangle r[10];
    for(int i=0;i<10;i++)
    {
        r[i].display();
    }
    return 0;
}