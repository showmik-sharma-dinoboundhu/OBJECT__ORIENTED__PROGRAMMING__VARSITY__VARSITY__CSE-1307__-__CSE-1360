#include<bits/stdc++.h>
using namespace std;

class B;

class A
{
    int a;

    public:
        void setValue()
        {
            a = 25;
        }

        friend float mean(A, B);
};

class B
{
    int b;

    public:
        void setValue()
        {
            b = 40;
        }

        friend float mean(A x, B y)
        {
            return (x.a + y.b) / 2.0f;
        }
};

int main()
{
    A x;
    B y;

    x.setValue();
    y.setValue();

    cout << mean(x, y) << endl;

    return 0;
}