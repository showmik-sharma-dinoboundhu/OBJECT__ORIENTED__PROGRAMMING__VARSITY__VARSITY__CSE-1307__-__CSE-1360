#include<bits/stdc++.h>
using namespace std;

class Box
{
    public:
        int l,w,h;

        void print_volume();
};

void Box :: print_volume()
{
    int vol;
    vol = l*w*h;
    cout << "Volume is = " << vol << endl;
}

int main()
{
    Box vol;
    cin >> vol.l >> vol.h >> vol.w;
    vol.print_volume();
    return 0;
}