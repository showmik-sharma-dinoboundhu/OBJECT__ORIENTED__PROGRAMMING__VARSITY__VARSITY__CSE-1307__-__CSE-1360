#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;

    p = new int;

    cout << "Enter a number: ";
    cin >> *p;

    cout << "Value: " << *p << endl;

    delete p;

    return 0;
}