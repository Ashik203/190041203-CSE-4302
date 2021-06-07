#include<bits/stdc++.h>
using namespace std;
#define ll long long
class counter
{

private:
    int a,c;

public:
    void setIncrementStep(int step_val)
    {
        a=step_val;
    }
    void get_c(int v)
    {
        c=v;
    }
    int getCount()
    {
        cout<<c<<"\n";
    }
    void increment()
    {
        c=c+a;
    }
    void reset()
    {
        c=0;
    }

};

int main()
{
    counter count;
    count.setIncrementStep(10);
    count.get_c(0);
    count.increment();
    count.increment();
    count.increment();
    count.getCount();
    count.reset();
    count.getCount();

}
