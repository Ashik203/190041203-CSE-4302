// arrover3.cpp
// creates safe array (index values are checked before access)
// uses overloaded [] operator for both put and get
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <process.h> //for exit()
const int LIMIT = 20; //array size
////////////////////////////////////////////////////////////////
class r
{
    private:
    int index;
    public:
        r(int i):index(i)
        {

        }
        int pos()
        {
            return index;
        }
};

template <class Type>
class safearay
{
private:
Type arr[LIMIT];
int position =0;
public:
Type& operator [](int n) //note: return by reference
{
    position=n;
if( n< 0 || n>=LIMIT )
{ throw r(n);
exit(1); }
return arr[n];
}
};
////////////////////////////////////////////////////////////////
int main()
{
safearay<int> sa1;
try
    {
        for (int j = 0; j < 150; j++) //insert elements
        {
            sa1[j] = j * 10; //*left* side of equal sign
        }
    }
    catch (r &e)
    {
        cout << "Exception found : Array is out of bound" << endl;
        cout << "Exeption at position " << e.pos() << endl;
    }



return 0;
}
