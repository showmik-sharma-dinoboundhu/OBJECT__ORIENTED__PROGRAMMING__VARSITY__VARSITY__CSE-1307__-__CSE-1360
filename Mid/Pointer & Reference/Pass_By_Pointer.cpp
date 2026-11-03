#include<bits/stdc++.h>
using namespace std;

void change(int *a)
{
    *a = 20;
}

int main()
{
    int x = 10;

    change(&x);

    cout << "Value: " << x << endl;

    return 0;
}