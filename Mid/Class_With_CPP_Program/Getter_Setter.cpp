#include<bits/stdc++.h>
using namespace std;

class box
{
    private:
        int l,w,c;

    public:
        void setData(int a, int b, int d)
        {
            l = a;
            w = b;
            c = d;
        }

        void getData()
        {
            cout << "Volume: " << l*w*c << endl;
        }
};

int main()
{
    box vol1;

    vol1.setData(5, 4, 3);
    vol1.getData();

    return 0;
}