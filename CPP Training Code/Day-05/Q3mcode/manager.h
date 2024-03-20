#ifndef MANAGER_H
#define MANAGER_H

#include"Emp.h"

class Manager :public Employee
{
    int numberSubordinates;
    double incentiveperSub;

    public:
    Manager();
    Manager(int,std::string,double,int,double);
    ~Manager();
    void display();
    void calIncentive();

};

#endif // MANAGER_H
