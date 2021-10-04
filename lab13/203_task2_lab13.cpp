#include<iostream>
using namespace std;

namespace my_namespace
{
    double temp=203;

}

double temp = 100;

int main()
{
    double temp =0;
    cout<<temp<<endl;
    cout<<my_namespace::temp;
}
