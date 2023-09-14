#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("D:\\Cpp_class\\eof_example.txt");
    string s;
    infile>>s;

    getline(infile,s);
    cout<<s;
    
    infile.close();
}