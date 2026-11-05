#include<bits/stdc++.h>
using namespace std;

class box
{
    private:
        int l,w,h;

    public:
        void input()
        {
            cin >> l >> w >> h;
        }

        void display()
        {
            cout << "Volume: " << l*w*h << endl;
        }
};

int main()
{
    box vol;

    vol.input();
    vol.display();

    return 0;
}