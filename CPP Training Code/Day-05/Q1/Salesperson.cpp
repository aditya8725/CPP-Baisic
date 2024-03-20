#include "Salesperson.h"

SalesPerson::SalesPerson():_saleAmmount(450000),_commisionrate(0.02)
{
    //here base class defalut consturctor is called automatically when we create object of derived class
    std::cout<<"Saleperson() ...";
}

SalesPerson::SalesPerson(int eid, std::string ena, double esal, double samt, double crt)
:Employee(eid,ena,esal),_saleAmmount(samt),_commisionrate(crt)
// as it is inheriting employee, call the paramterized constuctor of base calss
{
    std::cout<<"\nSaleperson(....)";
}

void SalesPerson::display()
{
    Employee::display();
    std::cout<<"\nSales Amount: "<<_saleAmmount;
    std::cout<<"\nCommission Rate: "<<_commisionrate;
}

SalesPerson::~SalesPerson()
{
    std::cout<<"\nDestructor Saleperson() ...";
}

double SalesPerson::calNetSalary()
{
    return Employee::calNetSalary()+_saleAmmount*_commisionrate;
}

