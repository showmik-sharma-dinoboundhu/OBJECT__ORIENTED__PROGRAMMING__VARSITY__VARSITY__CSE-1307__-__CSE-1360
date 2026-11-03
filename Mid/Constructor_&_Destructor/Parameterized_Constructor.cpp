#include<bits/stdc++.h>
using namespace std;

class Student
{
    int id;

    public:
        Student(int x)
        {
            id = x;
        }

        void display()
        {
            cout << "ID: " << id << endl;
        }
};

int main()
{
    Student s1(101);
    s1.display();

    return 0;
}