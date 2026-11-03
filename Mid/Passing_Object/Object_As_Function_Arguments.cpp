#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int id;

        void input()
        {
            cin >> id;
        }

        void display(Student s)
        {
            cout << "Student ID: " << s.id << endl;
        }
};

int main()
{
    Student s1, s2;

    s1.input();

    s2.display(s1);

    return 0;
}