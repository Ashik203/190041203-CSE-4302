#include<bits/stdc++.h>
using namespace std;
#define ll long long


class flight
{
private:
    int flight_no;
    string destination;
    float distance;
    float max_fuel_capacity;

    void cal_fuel()
    {
        if( ((distance<=1000)&&(max_fuel_capacity>=500))||((distance>1000||distance<=2000)&&(max_fuel_capacity>=1100))||((distance>2000)&&(max_fuel_capacity>=2200)))
        {
            cout<<"Fuel Capacity is fit for this flight"<<endl;

        }
        else cout<<"Not sufficient Fuel"<<endl;
    }


public:
    void feed_info()
    {
        cout<<"Enter values"<<endl;
        cout<<"flight number"<<endl;
        cin>>flight_no;
        cin>>max_fuel_capacity;
        cin>>destination;
        cin>>distance;
    }
    void showdata()
    {
        cout<<"flight no "<<flight_no<<endl;
        cout<<"Destination "<<destination<<endl;
        cout<<"distance "<<distance<<endl;
        cout<<"Max_fuel_capacity"<<max_fuel_capacity<<endl;
        cal_fuel();
    }
};


int main()
{
    flight f;
    f.feed_info();
    f.showdata();




}
