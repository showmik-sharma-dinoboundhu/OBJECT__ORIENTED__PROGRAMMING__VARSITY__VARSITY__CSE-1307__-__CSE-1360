#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Value: " << a << endl;
    cout << "Address: " << p << endl;
    cout << "Value using pointer: " << *p << endl;

    return 0;
}