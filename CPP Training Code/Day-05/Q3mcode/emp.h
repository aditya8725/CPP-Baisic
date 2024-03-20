#ifndef EMP_H
#define EMP_H

#include<iostream>

class Employee
{
    int _empid;
    std::string _ename;
    double _esalary;
    double _hra,_ma,_ptax;
        void calAllownces()
        {
            _hra= _esalary*0.02;
            _ma = _esalary*0.02;
            _ptax =_esalary*0.02;
        }
    public:
        Employee();
        Employee(int,std::string,double);
       virtual ~Employee();
       virtual  double calNetSalary();
       virtual void display();
};

#endif // EMP_H
