#include<bits/stdc++.h>
using namespace std;

class square
{
    int side;

    public:
        void setValue()
        {
            side = 5;
        }

        friend class rectangular;
};

class rectangular
{
    int width, height;

    public:
        void area(square s)
        {
            width = s.side;
            height = s.side;

            cout << "Area = " << width * height << endl;
        }
};

int main()
{
    square s;
    rectangular r;

    s.setValue();
    r.area(s);

    return 0;
}