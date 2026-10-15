#include<bits/stdc++.h>
using namespace std;

class cl 
{
    int i;
    public:
        void set_i(int j) 
        { 
            i=j; 
        }
        int get_i() 
        { 
            return i;
        }
};
int main()
{
    cl ob, *p;
    p = &ob; 
    p->set_i(10);
    cout << p->get_i(); 
}