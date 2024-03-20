#include "Emp.h"


Employee::Employee():_empid(101),_ename("Aditya"),_esalary(500000.)
{
    std::cout<<"\nEmployee()";
     calAllowance();
}

Employee::Employee(int eid, std::string en, double esal): _empid(eid),_ename(en),_esalary(esal)
{
    std::cout<<"\nEmployee(...)";
    calAllowance();
}

Employee::~Employee()
{
    std::cout<<"\nDestructor Employee()";

}

double Employee::calNetSalary()
{
    // std::cout<<"Employee net salary: ";
    return _esalary - _hra - _ma - _ptax;
}

void Employee::display()
{
    std::cout<<"\nId: "<<_empid;
    std::cout<<"\nName: "<<_ename;
    std::cout<<"\nSalary: "<<_esalary;
}