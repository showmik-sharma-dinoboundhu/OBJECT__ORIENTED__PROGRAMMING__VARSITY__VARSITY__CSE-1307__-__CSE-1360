#include<bits/stdc++.h>
using namespace std;

class Sample
{
    int a,b;
    public:
        void setValue()
        {
            a=25;
            b=40;
        }

        friend float mean(Sample S)
        {
            return (S.a + S.b) / 2.0f;
        }
};


int main()
{
    Sample s;
    s.setValue();
    cout << mean(s) << endl;
    return 0;
}