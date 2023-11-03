#include<iostream>
using namespace std;
class Time{
int h;
int m;
int s;
public:
void display(){
cout<<h<<"hour"<<":";
cout<<m<<"min"<<":";
cout<<s<<"seconds";

}
void operator=(int n){
s=n%60;
n=n/60;
m=n%60;
n=n/60;
h=n;
};
};
int main(){
Time t1;
t1=3730;
t1.display();
}