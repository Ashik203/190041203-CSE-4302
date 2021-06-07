#include<bits/stdc++.h>
using namespace std;
#include<string>
#define ll long long
class bank_account
{
private:
    string customer_name;
    int account_number;
    string type_of_account;
    int balance;
    int deposite_;
    int withdraw;
public:
    void getbalance(int b)
    {
        balance=b;
    }
    void getdeposite(int dep)
    {
        deposite_=dep;
    }
    void get_withdraw(int withd)
    {
        withdraw=withd;
    }

    void customerDetails_(string customername,int accountnumber)
    {
        customer_name=customername;
        account_number=accountnumber;
    }
    void accountType(string typeofaccount)
    {
        type_of_account=typeofaccount;
    }
    void balance_()
    {
        cout<<balance<<endl;
    }
    void deposite()
    {
        balance=balance+deposite_;
        cout<<"Final balabce :" <<balance<<endl;
    }
    void withdraw_()
    {
        if(balance>=withdraw)
            balance=balance-withdraw;
        else
            cout<<"withdraw error"<<endl;
    }
    void display()
    {
        cout<<"customer name : "<<customer_name<<"\n"<<"account_number :"<<account_number<<"\n"<<"Type of Account : "<<type_of_account<<"\n"<<"Balance : "<<balance <<endl;
    }
};

int main()
{
    bank_account customer;
    customer.customerDetails_("ashik",203);
    customer.accountType("savings");
    customer.getbalance(1000);
    customer.display();
    customer.getdeposite(50);
    customer.deposite();
    customer.get_withdraw(100000);
    customer.withdraw_();
    customer.display();

}
