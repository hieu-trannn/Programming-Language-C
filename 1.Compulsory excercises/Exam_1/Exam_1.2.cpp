#include <iostream>
#include <vector>
using namespace std;
class Bank;
class Account
{
public:
    Account(string n, float bl);
    string getname();
    float getbalance();
    void deposit(float dp);
    void withdraw(float wd);
    void print();

private:
    string name;
    float balance;
    friend class Bank;
};
class Bank
{
public:
    Bank()
    {
    }
    void add(Account ac);
    void print_all();
    void deposit(string n, float am);
    void withdraw(string n, float am);
    void add_interest(float ir);

private:
    vector<Account> vb;
};
Account::Account(string n, float bl)
{
    name = n;
    balance = bl;
}
string Account::getname()
{
    return name;
}
float Account::getbalance()
{
    return balance;
}
void Account::deposit(float dp)
{
    balance = balance + dp;
}
void Account::withdraw(float wd)
{
    balance = balance - wd;
}
void Account::print()
{
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}
void Bank::add(Account ac)
{
    vb.push_back(ac);
}
void Bank::print_all()
{
    for (int i = 0; i < vb.size(); i++)
    {
        vb[i].print();
    }
}
void Bank::deposit(string n, float am)
{
    for (int i = 0; i < vb.size(); i++)
    {
        if (vb[i].getname() == n)
        {
            vb[i].deposit(am);
            break;
        }
    }
}
void Bank::withdraw(string n, float am)
{
    for (int i = 0; i < vb.size(); i++)
    {
        if (vb[i].getname() == n)
        {
            vb[i].withdraw(am);
            break;
        }
    }
}
void Bank::add_interest(float it)
{
    for (int i = 0; i < vb.size(); i++)
    {
        vb[i].balance *= (1 + it / 100);
    }
}
int main()
{
    Account ac1("hieu", 1000);
    Account ac2("linh", 2000);
    Account ac3("duong", 3000);
    Bank bank;
    bank.add(ac1);
    bank.add(ac2);
    bank.add(ac3);
    cout << "======All account=======================================" << endl;
    bank.print_all();
    bank.deposit("hieu", 39);
    bank.withdraw("linh", 1612);
    cout << "======After hieu deposit 39, linh withdraw 1612=========" << endl;
    bank.print_all();
    cout << "======After interest all by 1.16%=======================" << endl;
    bank.add_interest(1.16);
    bank.print_all();
    return 0;
}
