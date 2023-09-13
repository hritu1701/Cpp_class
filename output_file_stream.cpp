#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("exp2222.txt");

    outfile<<"Hello World!";
    outfile.close();
}