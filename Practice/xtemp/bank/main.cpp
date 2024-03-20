// main.cpp
#include <iostream>
#include "account.h"
 
int main() {
    Account account("1234567890", "John Doe", AccountType::SAVINGS, 10000);
 
    char choice;
    double amount;
    do {
        std::cout << "1. Deposit\n"
                     "2. Withdraw\n"
                     "3. Check Balance\n"
                     "4. Exit\n"
                     "Enter your choice: ";
        std::cin >> choice;
 
        switch(choice) {
            case '1':
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                try {
                    account.deposit(amount);
                    std::cout << "Deposit successful.\n";
                } catch (std::invalid_argument& e) {
                    std::cerr << "Invalid argument: " << e.what() << std::endl;
                }
                break;
            case '2':
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                try {
                    account.withdraw(amount);
                    std::cout << "Withdrawal successful.\n";
                } catch (std::runtime_error& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                } catch (std::invalid_argument& e) {
                    std::cerr << "Invalid argument: " << e.what() << std::endl;
                }
                break;
            case '3':
                std::cout << "Current balance: " << account.getBalance() << std::endl;
                break;
            case '4':
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != '4');
 
    return 0;
}