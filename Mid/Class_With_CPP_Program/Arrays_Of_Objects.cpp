#include<bits/stdc++.h>
using namespace std;

class employee
{
    char name[30];
    float age;
    public:
        void getData();
        void putData();
};

void employee :: getData()
{
    cin >> name >> age ;
}

void employee :: putData()
{
    cout << name << endl << age << endl; 
}

const int n = 3;

int main()
{
    employee e[n];
    for(int i=0;i<n;i++)
    {
        cout << "Details : " << endl << i+1 << " ";
        e[i].getData(); 
    }

    cout << endl;

    for(int i=0;i<n;i++)
    {
        cout << "Details : " << endl << i+1 << " ";
        e[i].putData();
    }
    return 0;
}