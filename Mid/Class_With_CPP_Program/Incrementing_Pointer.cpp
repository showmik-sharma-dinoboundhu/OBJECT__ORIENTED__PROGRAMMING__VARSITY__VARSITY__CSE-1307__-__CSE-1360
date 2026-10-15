#include<bits/stdc++.h>
using namespace std;

class cl
{
    int i;
    public:
        void set_i(int j)
        {
            i = j;
        }
        int get_i()
        {
            return i;
        }
};

int main()
{
    cl ob1, ob2, ob3, *p;

    ob1.set_i(10);
    ob2.set_i(20);
    ob3.set_i(30);

    p = &ob1;
    for(int i=0;i<3;i++)
    {
        cout << p->get_i() << endl;
        p++;
    }
    return 0;
}