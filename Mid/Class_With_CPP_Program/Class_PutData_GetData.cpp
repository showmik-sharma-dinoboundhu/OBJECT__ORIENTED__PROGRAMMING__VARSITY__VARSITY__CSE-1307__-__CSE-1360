#include<bits/stdc++.h>
using namespace std;

class item
{
    int num;
    float cost;

    public:
        void getData(int a, float b);

        void putData()
        {
            cout << "Number :" << num << endl;
            cout << "Cost :" << cost << endl;
        }
};

void item :: getData(int a, float b)
{
    num = a;
    cost = b;
}

int main()
{
    item x;
    cout << "Object X :" << endl;
    x.getData(100, 299.98);
    x.putData();
    return 0;
}