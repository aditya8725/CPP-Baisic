#include"Emp.h"
//All members of base class are inherited into the derive class
//But private members of base class are not directly accessible to derive class
class Salesperson : public Employee
{
    double _salesamount,_commrate;
    
    public:
        Salesperson();
        Salesperson(int,std::string,double,double,double);
        void display();
        ~Salesperson();
        double calNetSalary();

        void calCommissionAmount();// child special function
};
