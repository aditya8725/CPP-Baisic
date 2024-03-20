
#include"BankAccount.h"

BankAccount::BankAccount():accno(100201),custname("Jay")
{
    std::cout<<"\n Bank Account() "
    //or we can write as
    
    // accno = 101;
    // custname = "Ravi";
}

BankAccount::BankAccount(int ano, std::string cnm, Address add)
  :accno(ano),custname(cnm),custaddress(add)
{
     std::cout<<"\n BankAccount(...) ";
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

void operator<<(std::ostream &os, BankAccount &bobj)
{
     os<<"\n accno= "<<bobj.accno<<" Name= "<<bobj.custname<<" ";
     os<<bobj.custaddress; // use overloaded << operator from Address class
}

