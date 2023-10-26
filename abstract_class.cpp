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
        cin>>radius;
    }
    
    void create()
    {
        cout<<"Circle was created"<<endl;
    }

    void calculateArea()
    {
        cout<<(3.14*radius*radius);
    }
}; 

int main()
{
    Shape s1;
}