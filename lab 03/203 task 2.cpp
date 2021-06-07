#include<bits/stdc++.h>
using namespace std;
#define ll long long
class RationalNumber
{

private:
    int numerator;
    int denominator;
    int a;

public:

    void assign(int numerator_,int denominator_)
    {
        numerator=numerator_;
        a=numerator_;
        denominator=denominator_;
    }
    void get_a(int g)
    {
        a=g;
    }
    double convert()
    {

        if(numerator==0)
        {
            cout<<"error"<<endl;

        }
        else
            cout<<"convert"<<" "<<numerator*1.0/denominator*1.0<<endl;
    }
    void invert()
    {
if(numerator==0)
        {
            cout<<"error"<<endl;

        }
        else
        {
            numerator=denominator;
            denominator=a;
        }
    }

    void print()
    {
 if(numerator==0)
        {
            cout<<"error"<<endl;

        }
        else
            cout<<"The Rational Number is "<<numerator<<"/"<<denominator<<endl;
    }

};

int main()
{

    RationalNumber R;

    R.assign(3,2);
    R.print();
    R.convert();
    R.invert();
    R.print();

    R.assign(0,2);
    R.convert();
    R.invert();
    R.print();


}
