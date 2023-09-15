#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    ofstream outfile;
    outfile.open("D:\\Cpp_class\\readexp234.txt");

    outfile<<"Hemlo ji !"<<endl;
    cout<<outfile.tellp();
  


}
