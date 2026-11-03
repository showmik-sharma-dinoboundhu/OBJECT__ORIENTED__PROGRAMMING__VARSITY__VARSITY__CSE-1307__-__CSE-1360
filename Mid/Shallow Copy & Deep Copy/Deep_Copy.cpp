#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int *id;

        Student(int x)
        {
            id = new int(x);
        }

        Student(Student &s)
        {
            id = new int(*s.id);
        }
};

int main()
{
    Student s1(10);
    Student s2(s1);

    *s2.id = 20;

    cout << *s1.id << endl;
    cout << *s2.id << endl;

    return 0;
}