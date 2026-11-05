#include<bits/stdc++.h>
using namespace std;

class Student
{
    int id;
    string name;


    public:
        void setData(int x, string y)
        {
            id = x;
            name = y;
        }

        void getData()
        {
            cout << id << " " << name << endl;
        }
};

int main()
{
    Student s;
    s.setData(20, "showmik");
    s.getData();

    return 0;
}