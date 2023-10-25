#include<iostream>
using namespace std;

class Vehicle
{
    public:
        void start()
        {
            cout<<"Vehicle started"<<endl;
        }
        void stop()
        {
            cout<<"Vehicle stopped"<<endl;
        }
};

class Car : public Vehicle
{
    public:
        void start()
        {
            cout<<"Car started"<<endl;
        }
        void stop()
        {
            cout<<"Car stopped"<<endl;
        }
};

int main()
{
    Car c1;
    c1.start();
    c1.stop();
}