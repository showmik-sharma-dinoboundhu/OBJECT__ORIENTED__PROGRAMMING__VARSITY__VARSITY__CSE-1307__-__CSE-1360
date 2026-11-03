#include<bits/stdc++.h>
using namespace std;

class box
{
    private:
        int l,w,c;

    public:
        void input()
        {
            cin >> l >> w >> c;
        }

        void print_volume()
        {
            cout << "Volume: " << l*w*c << endl;
        }
};

int main()
{
    box vol1;

    vol1.input();
    vol1.print_volume();

    return 0;
}