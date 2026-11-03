#include<bits/stdc++.h>
using namespace std;

class Student
{
    int *id;

    public:
        Student(int x)
        {
            id = new int(x);
        }

        Student(Student &&s)
        {
            id = s.id;
            s.id = NULL;
        }

        void display()
        {
            cout << "ID: " << *id << endl;
        }
};

int main()
{
    Student s1(101);
    Student s2(move(s1));

    s2.display();

    return 0;
}