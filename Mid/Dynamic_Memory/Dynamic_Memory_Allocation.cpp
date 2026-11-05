#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;

    p = new int;

    cin >> *p;

    cout << "Value: " << *p << endl;

    delete p;

    return 0;
}