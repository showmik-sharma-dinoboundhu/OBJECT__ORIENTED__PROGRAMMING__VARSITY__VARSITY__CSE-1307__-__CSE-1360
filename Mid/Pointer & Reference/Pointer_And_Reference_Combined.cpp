#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;

    // Pointer
    int *p = &a;

    // Reference
    int &r = a;

    cout << "Original Value: " << a << endl;
    cout << "Pointer Value: " << *p << endl;
    cout << "Reference Value: " << r << endl;

    *p = 20;

    cout << "After Pointer: " << a << endl;

    r = 30;

    cout << "After Reference: " << a << endl;

    return 0;
}
