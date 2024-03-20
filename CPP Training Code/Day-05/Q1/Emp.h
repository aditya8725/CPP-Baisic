#ifndef EMP_H
#define EMP_H

#include<iostream>

class Employee
{
    int _empid;
    std::string _ename;
    double _esalary;
    double _hra,_ma,_ptax;
        void calAllowance()
        {
            _hra=_esalary * 0.05;
            _ma= _esalary * 0.02;
            _ptax=_esalary * 0.03; 
        }
    public:
    Employee();
    Employee(int,std::string,double);
    ~Employee();
    double calNetSalary();
    void display();

};

#endif // EMP_H
