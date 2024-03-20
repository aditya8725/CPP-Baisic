#include "Emp.h"

Employee::Employee():_empid(101),_ename("Pravin"),_esalary(10000)
{
    std::cout<<"\n Employee() ";
    calAllownces();
}
Employee::Employee(int eid, std::string enm, double esal)
:_empid(eid),_ename(enm),_esalary(esal) {
    std::cout<<"\n Employee(...) ";
    calAllownces();
}
Employee::~Employee()
{
    std::cout<<"\n ~Employee() ";
}
double Employee::calNetSalary()
{
    return  _esalary-_hra-_ma-_ptax;
}
void Employee::display()
{
    std::cout<<"\n Id="<<_empid;
    std::cout<<"   name="<<_ename;
    std::cout<<"   salary="<<_esalary<<"   ";
}
