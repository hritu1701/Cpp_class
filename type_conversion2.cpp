#include <iostream>
#include <sstream>
using namespace std;

class Student {
public:
    int id;
    string section;
    int semester;
    string name;

    void input() {
        cin >> id >> section >> semester>> name;
    }

    void display() {
        cout << id << " " << section << " " << semester << " " << name;
    }

    operator string() 
    {
        return name;
    }
};

int main() {
    Student s1;
    s1.input();
    string t = s1.operator string();
    cout << t;

    return 0;
}
