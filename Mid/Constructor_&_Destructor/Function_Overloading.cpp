#include<bits/stdc++.h>
using namespace std;

class Sum
{
    public:
        void add(int a, int b)
        {
            cout << a+b << endl;
        }

        void add(int a, int b, int c)
        {
            cout << a+b+c << endl;
        }
};

int main()
{
    Sum s;

    s.add(10, 20);
    s.add(10, 20, 30);

    return 0;
}