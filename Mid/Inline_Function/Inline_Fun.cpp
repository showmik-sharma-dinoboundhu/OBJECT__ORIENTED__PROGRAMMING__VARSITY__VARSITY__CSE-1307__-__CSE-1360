#include<bits/stdc++.h>

inline int check(int x)
{
    return (x % 2);
}

using namespace std;
int main()
{
    int a=10, b=11;
    if(check (a) == 0)    cout << "Even" << endl;
    else    cout << "Odd" << endl;

    if(check(b) == 0)      cout << "Even" << endl;
    else    cout << "Odd" << endl;
    return 0;
}