#include<bits/stdc++.h>
using namespace std;

class box
{
    public:
        int l,w,h;
    
    void display()
    {
        int vol = l*w*h;
        cout << "Volume " << vol << endl;
    }
};

int main()
{
    box vol;

    cin >> vol.l >> vol.h >> vol.w;

    vol.display();
    return 0;
}