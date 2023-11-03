#include<iostream>

using namespace std;

class Time{
public:
int hour;
int minute;
int second;

void input()
{
cin>>hour>>minute>>second;
}
void display()
{
cout<<hour<<":"<<minute<<":"<<second<<endl;
}
operator int()
{
int s = hour * 60 * 60;
s = s + minute * 60;
s = s + second;

return s;
}
};

int main()
{
Time t1;
t1.input();
int s = t1.operator int();
cout<<s;
}