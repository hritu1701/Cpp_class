#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("exp2222.txt");  //Create a .txt file

    outfile<<"Hello World!";    //Write in file
    outfile.close();
}