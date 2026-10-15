#include<bits/stdc++.h>
using namespace std;

class Set
{
    int m,n;
    public:
        void input();
        void display();
        void largest();
};

void Set :: input()
{
    cin >> m >> n;
}

void Set :: largest()
{
        if(m >= n)
    {
        cout << "m is the largest one :" << m << endl; 
    }
    else
    {
        cout << "n is the largest one :" << n << endl;
    }
}

void Set :: display()
{
    largest();
}

int main()
{
    Set a;
    a.input();
    a.display();
    return 0;
}