// arrover3.cpp
// creates safe array (index values are checked before access)
// uses overloaded [] operator for both put and get
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <process.h> //for exit()
const int LIMIT = 20; //array size
////////////////////////////////////////////////////////////////
template <class Type>
class safearay
{
private:
Type arr[LIMIT];
public:
Type& operator [](int n) //note: return by reference
{
if( n< 0 || n>=LIMIT )
{ cout << "\nIndex out of bounds";
exit(1); }
return arr[n];
}
};
////////////////////////////////////////////////////////////////
int main()
{
safearay<int> sa1;
for(int j=0; j<LIMIT; j++) //insert elements
sa1[j] = j*10; //*left* side of equal sign
for(int j=0; j<LIMIT; j++) //display elements
{
int temp = sa1[j]; //*right* side of equal sign
cout << "Element " << j << " is " << temp << endl;
}

safearay<char> sa2;
for(int j=0; j<LIMIT; j++) //insert elements
sa2[j] = j+97; //*left* side of equal sign
for(int j=0; j<LIMIT; j++) //display elements
{
 char temp = sa2[j]; //*right* side of equal sign
cout << "Element " << j << " is " << temp << endl;
}


return 0;
}
