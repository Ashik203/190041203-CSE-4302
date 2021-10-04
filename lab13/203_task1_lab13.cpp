#include <bits/stdc++.h>
using namespace std;
const int LIMIT = 11;
int main ()
{
    set <int> st;
    int arr[5];

    for (int i=0, j=0;i<LIMIT;i++)
    {
       if (i%2==0) { arr[j]=i;j++; }
    }

    for (int i=1;i<LIMIT;i++)
    {
       if (i%2==1) { st.insert(i); }
    }

    vector <int> vic(11);
     merge(arr, arr+6, st.begin(), st.end(), vic.begin());

     for (int i=0;i<vic.size();i++)
     {
         cout<<vic[i]<<endl;
     }

}
