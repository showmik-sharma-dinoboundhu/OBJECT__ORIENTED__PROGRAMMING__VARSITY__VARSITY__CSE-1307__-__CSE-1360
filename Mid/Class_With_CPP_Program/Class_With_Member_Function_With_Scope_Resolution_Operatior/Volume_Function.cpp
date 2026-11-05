#include<bits/stdc++.h>
using namespace std;

class Box
{
    public:
        int l,w,h;

        void display();
        void input();
};

void Box :: input()
{
    cin >> l >> w >> h;
}

void Box :: display()
{
    int vol = l*w*h;
    cout << "Volume is = " << vol << endl;
}

int main()
{
    Box vol;
    vol.input();
    vol.display();
    return 0;
}