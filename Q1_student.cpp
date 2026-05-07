#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student students[3] = {
        Student("Vraj", 101),
        Student("Sara", 102),
        Student("Rutik", 103)
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].display();
    }

    return 0;
}