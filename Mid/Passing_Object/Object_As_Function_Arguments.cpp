#include<bits/stdc++.h>
using namespace std;

class Time
{
    int hr, min;
    public:
        void getTime(int h, int m)
        {
            hr = h;
            min = m;
        }
        void putTime()
        {
            cout << hr << "Hours and" << " ";
            cout << min << endl;
        }
        void sum(Time, Time);
};


    void Time :: sum(Time t1, Time t2)
{
    min = t1.min + t2.min;
    hr = min/60;
    min = min%60;
    hr = hr + t1.hr + t2.hr;
}

int main()
{
    Time t1, t2, t3;
    
    t1.getTime(2, 45);
    t2.getTime(1, 30);
    t3.sum(t1, t2);

    t1.putTime();
    t2.putTime();
    t3.putTime();
    return 0;
}