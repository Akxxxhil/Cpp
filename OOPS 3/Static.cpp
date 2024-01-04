#include <bits/stdc++.h>
using namespace std;
class Customer
{
    string name;
    int acc_num;
    int balance;
    static int total_customer;
    static int total_balance;
    // static keyword can only use once and shared by others...

public:
    Customer(string name, int acc_num, int balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        total_customer++;
        total_balance = total_balance + balance;
    }
    //static function
    static void totalBalance()
    {
        cout <<"The total balance in the bank : "<< total_balance << endl;
    }
    void display()
    {
        cout << name << " " << acc_num << " " << balance << " " << total_customer << " " << endl;
    }
};
int Customer::total_customer = 0;
int Customer::total_balance = 0;
int main()
{
    Customer c1("Akxxhil", 1, 1000);
    Customer c2("Smruti", 2, 2000);
    Customer c3("Gym", 3, 3000);

    c1.display();
    c2.display();
    c3.display();
    Customer::totalBalance();
}
