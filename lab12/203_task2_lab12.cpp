#include <bits/stdc++.h>
using namespace std;
const int LIMIT = 5;
template <class Type>
Type amax (Type* arr, int s)
{
    Type temp=arr[0];
    for (int i=0;i<s;i++)
    {
        if (arr[i]>temp) temp=arr[i];
    }
    return temp;
}

int main ()
{
    int arr1[LIMIT];
    for (int i=0;i<LIMIT;i++)
    {
        cin>>arr1[i];
    }
     for (int i=0;i<LIMIT;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"The largest element is "<<amax(arr1, LIMIT)<<endl;
    double arr2[LIMIT];
    for (int i=0;i<LIMIT;i++)
    {
        cin>>arr2[i];
    }
    for (int i=0;i<LIMIT;i++)
    {
        cout<<arr2[i]<<endl;
    }
    cout<<"The largest element is "<<amax(arr2, LIMIT)<<endl;

}
