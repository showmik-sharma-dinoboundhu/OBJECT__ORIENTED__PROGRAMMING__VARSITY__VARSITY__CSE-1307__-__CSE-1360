#include<bits/stdc++.h>
using namespace std;

class even
{
    int a;
    public:
        even (int m);
        int check();
};

even :: even(int m)
{
    a = m;
}

inline int even :: check()
{
    return (a % 2);
}

int main()
{
    even a=10, b=11;
    if(a.check() == 0)      cout << "Even" << endl;
    else    cout << "Odd" << endl;

    if(b.check() == 0)      cout << "Even" << endl;
    else    cout << "Odd" << endl;
    return 0;
}