#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;

int main()
{
    int arr[10];

    ifstream infile;
    infile.open("D:\\Rough\\exp420.txt"); //Read the file

    for(int i=0;i<10;i++)
    {
        infile>>arr[i];
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

        infile.close();
    }
    






}