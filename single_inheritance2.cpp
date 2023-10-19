#include<iostream>
using namespace std;

class Student
{
    private:
        int rno;
    
    protected:
        string section;

    public:
        void getrno()
        {
            cout<<"Enter roll no: "<<endl;
            cin>>rno;
        }

        void showrno()
        {
            cout<<"The rollno is : "<<rno<<endl;
        }
};

class Result: public Student
{
    private:
        float fees;

    public:
        void getdata()
        {
            cout<<"Enter fees: "<<endl;
            cin>>fees;

            cout<<"Enter section: "<<endl;
            cin>>section;

            getrno();

        }
};

int main()
{
    Result r1;

    r1.getdata();
    r1.showrno();

}