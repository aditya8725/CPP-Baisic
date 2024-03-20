#include"BankAccount.h"

BankAccount::BankAccount():accno(100201),custname("Jay")
{
    std::cout<<"\n BankAccount() ";
}
BankAccount::BankAccount(int ano, std::string cnm, Address add)
  :accno(ano),custname(cnm),custaddress(add)
{
     std::cout<<"\n BankAccount(...) ";
}
void operator<<(std::ostream &os, BankAccount &bk)
{
     os<<"\n accno= "<<bk.accno<<" Name= "<<bk.custname<<" ";
     os<<bk.custaddress; // use overloaded << operator from Address class
}
void BankAccount::display()
{
    std::cout<<"\n accno= "<<accno;
    std::cout<<"Name = "<<custname;
    custaddress.display();
}
BankAccount::~BankAccount()
{
    std::cout<<"\n ~BankAccount() ";
}
