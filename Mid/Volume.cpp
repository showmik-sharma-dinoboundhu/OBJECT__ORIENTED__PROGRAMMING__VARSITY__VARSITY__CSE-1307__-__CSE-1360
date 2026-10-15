#include<bits/stdc++.h>
using namespace std;

class box
{
    public:
        int l,w,c;
    
    void print_volume()
    {
        int vol;
        vol = l*w*c;
        cout << "Volume " << vol << endl;
    }
};

int main()
{
    box vol1, vol2;

    cin >> vol1.l >> vol1.c >> vol1.w;

    vol1.print_volume();
    return 0;
}