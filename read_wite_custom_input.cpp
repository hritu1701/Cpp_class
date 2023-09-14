#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream outfile;
    ifstream infile;  // Declare an input file stream.

    // Open the file in append mode, so existing content is preserved, and new data is appended.
    outfile.open("D:\\Cpp_class\\writeexp238.txt", ios::out | ios::app);

    string name;
    int roll;
    float marks;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks: ";
    cin >> marks;

    // Write the user input to the output file
    outfile << "Name: "<<name << endl<< "Roll: "<<roll <<endl<< "Marks: "<<marks << endl;

    outfile.close(); // Close the output file

    infile.open("D:\\Cpp_class\\writeexp238.txt"); // Open the file for reading

    if (!infile)
    {
        cerr << "Error opening input file!" << endl;
        return 1;
    }

    // Read and display the contents of the input file
    while (infile>>name >> roll >> marks)
    {
        cout << "Name: " << name << ", Roll Number: " << roll << ", Marks: " << marks << endl;
    }

    infile.close(); // Close the input file

    return 0;
}
