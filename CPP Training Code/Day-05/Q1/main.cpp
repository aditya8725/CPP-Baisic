#include "Salesperson.h"

int main()
{
    SalesPerson sp1;
    sp1.display();
    std::cout<<"\nTotal Salary: "<<sp1.calNetSalary();

    std::cout<<"\n==============================\n";

    SalesPerson sp2(102,"Aditya",75000,15000,0.04);
    sp2.display();
    std::cout<<"\nTotal Salary: "<<sp2.calNetSalary();

    std::cout<<"\n===============================\n";

    return 0;
}