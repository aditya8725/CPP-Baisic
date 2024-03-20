// account.cpp
#include "account.h"
#include <stdexcept>
 
Account::Account(std::string accNumber, std::string name, AccountType accType, double initialBalance)
    : accountNumber(accNumber), holderName(name), type(accType), balance(initialBalance) {}
 
void Account::deposit(double amount) {
    if (amount <= 0) {
        throw std::invalid_argument("Deposit amount must be positive.");
    }
    balance += amount;
}
 
void Account::withdraw(double amount) {
    if (amount <= 0) {
        throw std::invalid_argument("Withdrawal amount must be positive.");
    }
 
    if (balance - amount < 3000) {
        throw std::runtime_error("Low balance. Minimum balance requirement not met.");
    }
 
    balance -= amount;
}
 
double Account::getBalance() const {
    return balance;
}
 
std::string Account::getAccountNumber() const {
    return accountNumber;
}
 
std::string Account::getHolderName() const {
    return holderName;
}
 
AccountType Account::getAccountType() const {
    return type;
}
 