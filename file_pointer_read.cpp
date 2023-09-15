#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{ 
    string s;
    ifstream infile;
    infile.open("D:\\Cpp_class\\readexp234.txt");

 while(infile.eof()==0)  //Read full content.
    { 

    getline(infile,s);
    cout<<s<<endl;

    }


    infile.seekg(0);  //"seekg" is member function of 'if' stream class . Take 1 integer as parameter.
    getline(infile,s);
    cout<<s;

}
