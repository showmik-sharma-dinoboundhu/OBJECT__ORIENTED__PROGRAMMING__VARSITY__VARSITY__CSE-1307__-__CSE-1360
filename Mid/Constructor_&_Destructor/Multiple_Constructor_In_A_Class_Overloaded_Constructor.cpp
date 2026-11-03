#include<bits/stdc++.h>
using namespace std;

class Student
{
    int id;

    public:
        Student()
        {
            id = 0;
        }

        Student(int x)
        {
            id = x;
        }

        Student(int x, int y)
        {
            id = x + y;
        }

        void display()
        {
            cout << "ID: " << id << endl;
        }
};

int main()
{
    Student s1;
    Student s2(101);
    Student s3(50, 60);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}