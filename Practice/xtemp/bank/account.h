// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H
 
#include <iostream>
#include <string>
 
enum class AccountType {
    SAVINGS,
    CURRENT
};
 
class Account {
private:
    std::string accountNumber;
    std::string holderName;
    AccountType type;
    double balance;
 
public:
    Account(std::string accNumber, std::string name, AccountType accType, double initialBalance);
 
    void deposit(double amount);
    void withdraw(double amount);
 
    double getBalance() const;
    std::string getAccountNumber() const;
    std::string getHolderName() const;
    AccountType getAccountType() const;
};
 
#endif // ACCOUNT_H