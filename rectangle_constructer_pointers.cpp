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
    Rectangle(Rectangle &x)
    {
        this->length=x.length;
        this->width=x.width;
    }
   void display()
   {
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
   }
};
int main()
{
   Rectangle r1;
   Rectangle r2(r1);

   r2.display();

    return 0;
}