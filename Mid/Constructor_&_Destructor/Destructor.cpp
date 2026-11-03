#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int id;

        Student()
        {
            id = 101;
            cout << "Student Created" << endl;
        }

        void display()
        {
            cout << "Student ID: " << id << endl;
        }

        ~Student()
        {
            cout << "Student Deleted" << endl;
        }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}