#include<bits/stdc++.h>
#include<math.h>

using namespace std;
#define ll long long
int a;
class calculator{

private:
    int b;

public:

    calculator()
    {
        int a=0;
    }
    calculator(int c)
    {
        a=c;
    }

    int add(int b)
    {
        a=a+b;

    }
    int sub(int b)
    {
        return a=a-b;

    }
    int mul(int b)
    {
        a=a*b;

    }
    int div(int b)
    {

        if(b==0)
        {
            cout<<"error: divided by zero is undefined";
        }
        else a=a/b;

    }
    void clear()
    {
        a=0;
    }
    void display()
    {
         cout<<a<<endl;
    }

   ~calculator(){
       cout<<"calculator object is destroyed"<<endl;}

};


int main()
{
   calculator cal;
   cal.add(10);
   cal.display();
   cal.sub(3);
   cal.display();
   cal.mul(4);
   cal.display();
   cal.div(4);
   cal.display();
   cal.clear();
   cal.add(14);
   cal.display();
   cal.div(0);









}
