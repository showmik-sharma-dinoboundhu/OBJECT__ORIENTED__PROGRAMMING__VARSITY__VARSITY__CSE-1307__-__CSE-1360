#include<bits/stdc++.h>
using namespace std;

class Student
{
    int id;

    public:
        void setData(int x);
        void display();
};

inline void Student::setData(int x)
{
    id = x;
}

inline void Student::display()
{
    cout << "ID: " << id << endl;
}

int main()
{
    Student s1;

    s1.setData(101);
    s1.display();

    return 0;
}