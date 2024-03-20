#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include "Address.h"

class BankAccount
{
    int accno;
    std::string custname;
    Address custadress; // contained object(object of address class)

public:
    BankAccount();
    BankAccount(int, std::string, Address add);
    void display();
    friend void operator<<(std::ostream &os, BankAccount &bobj);
    ~BankAccount();
};

#endif // BANKACCOUNT_H
