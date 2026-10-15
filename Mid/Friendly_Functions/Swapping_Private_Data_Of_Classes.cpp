#include<bits/stdc++.h>
using namespace std;

class B;

class A
{
    int a;
    public:
        void setA()
        {
            a = 25;
        }

        friend void swap(A, B);
};

class B
{
    int b;
    public:
        void setB()
        {
            b = 40;
        }

        friend void swap(A x, B y)
        {
            int temp = x.a;
            x.a = y.b;
            y.b = temp;

            cout << "a = " << x.a << endl;
            cout << "b = " << y.b << endl;
        }
};

int main()
{
    A x;
    B y;

    x.setA();
    y.setB();

    swap(x, y);

    return 0;
}