#include<iostream>
#include "bank.h"

int main()
{
    bank b1;
    std::cin>>b1;

    std::cout<<"\n==================================\n";
    try
    {
        std::cout<<b1;
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}