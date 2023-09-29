#include <iostream>

using namespace std;

class Rectangle{
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
friend int operator ==(Rectangle&,Rectangle&);
};

int operator ==(Rectangle &x,Rectangle &y)
{
if((x.length*x.width)==(y.length*y.width))
return 1;

else
return 0;
}

int main()
{
Rectangle r1,r2;
cout<<(r1==r2);
}