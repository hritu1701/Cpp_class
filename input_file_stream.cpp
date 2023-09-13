#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;

int main()
{
    string s;

    ifstream infile;
    infile.open("exp2222.txt"); //Read the file

    cin>>s;
    getline(infile,s);
    cout<<s;



}