#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;

    cout << "Original Value: " << a << endl;
    cout << "Reference Value: " << r << endl;

    r = 20;

    cout << "Updated Value: " << a << endl;

    return 0;
}