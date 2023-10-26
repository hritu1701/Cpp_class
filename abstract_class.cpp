#include<iostream>
using namespace std;

class Shape
{
    public:
        void create()
        {
            cout<<"Shape was created"<<endl;
        }

        virtual void calculateArea()=0;
};

class Circle : public Shape
{
    public:
    int radius;

    Circle()
    {
        cout<<"Enter the radius: "<<endl;
        cin>>radius;
    }
    
    void create()
    {
        cout<<"Circle was created"<<endl;
    }

    void calculateArea()
    {
        cout<<"Area is: "<<(3.14*radius*radius);
    }
}; 

int main()
{
    Circle c1;
    c1.create();
    c1.calculateArea();
}