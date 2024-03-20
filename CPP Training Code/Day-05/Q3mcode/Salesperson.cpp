#include "Salesperson.h"

Salesperson::Salesperson():_salesamount(45000),_commrate(0.2)
{
// base class default constructor is called automatically 
// when we create object of derive class
     std::cout<<"\n Salesperson() ";
}

Salesperson::Salesperson(int id, std::string nm, double sal, double samt,
 double crate):Employee(id,nm,sal)// call parameterized ctor of base class otherwise it calls default ctor of base class
 ,_salesamount(samt),_commrate(crate)
{
     std::cout<<"\n Salesperson(...) ";
}

void Salesperson::display()
{
    Employee::display();
    std::cout<<"Salesamount="<<_salesamount;
    std::cout<<"  Commrate="<<_commrate;
}

Salesperson::~Salesperson()
{
    std::cout<<"\n ~Salesperson() ";
}

double Salesperson::calNetSalary()
{
    return Employee::calNetSalary()+_salesamount*_commrate;
}

void Salesperson::calCommissionAmount()
{
    std::cout<<"\nCommission Amount= "<<_salesamount*_commrate;
}
