#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    ifstream infile;
    infile.open("D:\\Cpp_class\\readexp234.txt");


    while (!infile.eof()) {
        getline(infile, s);
        cout << s << endl;
    }

    infile.clear(); // Clear the end-of-file flag
    infile.seekg(0); // Reset file pointer to the beginning

    if (!infile.eof()) {
        getline(infile, s);
        cout << s << endl;
    }

    infile.close(); // Close the file

    return 0;
}
