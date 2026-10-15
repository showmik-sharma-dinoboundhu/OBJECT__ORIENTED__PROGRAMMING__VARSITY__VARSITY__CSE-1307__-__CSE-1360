#include<bits/stdc++.h>
using namespace std;

class Student
{
    int marks;
    public:
        void setMarks(int marks)
        {
            this->marks = marks;
        }

        void show()
        {
            cout << this->marks;
        }
};


int main()
{
    Student s;
    s.setMarks(90);
    s.show();
    return 0;
}