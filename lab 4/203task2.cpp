#include<bits/stdc++.h>
using namespace std;
#define ll long long
class task{
    int flight;
    string destination;
    float distance;
    float maxfuelcapacity;
    int fuel;
    void calfuel()
    {
        if(distance<=1000)
            fuel=500;
        else if(distance<1000&&distance<=2000)
            fuel=1100;
        else fuel=2200;
    }

public:
    void feedinfo()
    {
        cin>>flight>>destination>>distance>>maxfuelcapacity;

    }

 void showinfo()
        {
            cout<<flight<<destination<<distance<<maxfuelcapacity;
            calfuel();
             if(distance<=1000&&fuel>=500)
             {
                 cout<<"valid";
             }

        else if(distance<1000&&distance<=2000&&fuel>=1100)
             {
                 cout<<"valid";
             }
        else if (distance<2001&&fuel>=2200)
             {
                 cout<<"valid";
             }
        else {
                 cout<<"invalid";
             }



        }
};

int main()
{
task t;
t.feedinfo();
t.showinfo();




}
