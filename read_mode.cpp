#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;

    infile.open("D:\\Cpp_class\\readexp234.txt",ios::in);
    outfile.open("D:\\Cpp_class\\writeexp234.txt",ios::app); //print onther content after previous

    string s;
    while(infile.eof()==0)  //Read full content.
    { 

    getline(infile,s);
    outfile<<s<<endl;
    cout<<s<<endl;

    }
    
    infile.close();
    outfile.close();
}