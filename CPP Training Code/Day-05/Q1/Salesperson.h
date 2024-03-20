#include "Emp.h"

//All members of base class are inherited into the derived class
//But private members of base class are "not" direclty accessible to derived class


//salesperson extends employee
class SalesPerson: public Employee
{
    double _saleAmmount,_commisionrate;

    public:
    SalesPerson();
    //        (empid,empname, esal, _saleamnt,_commsnrate)
    SalesPerson(int,std::string,double,double,double);
    void display();
    ~SalesPerson();
    double calNetSalary();

};