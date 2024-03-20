#include"address.h"

class BankAccount// container class
{
    int accno;
    std::string custname;
    Address custaddress; // contained object(Object of Address class)
    public:
        BankAccount();
        BankAccount(int,std::string , Address add );
        void display();
        friend void operator<<(std::ostream &os,BankAccount &);
         ~BankAccount();
};
