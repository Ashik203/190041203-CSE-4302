#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long

class rectangle
{

   private:
       float length;
       float width;
   public:
       rectangle(float l=1,float w=1):length(l),width(w)
       {
         getdata(l,w);
       }
    void getdata(float l,float w)
    {
     length=l;
     width=w;
    }

    void perimeter()
    {
        cout<<"perimeter is "<< 2*(length+width)<<endl;
    }

    void  area()
    {
        cout<<"area is "<<length*width;
    }


};


int main()
{
    rectangle rec;
    rec.getdata(2,3);
    rec.perimeter();
    rec.area();

}
