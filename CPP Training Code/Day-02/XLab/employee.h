#include<iostream>
class Employee
{
    int id;
    char *name;
    int age;
    double salary;

public:
    // default
    Employee();

    // parameterized
    Employee(int empid, const char *empname, int empage, double empsal);

    // display
    void display();

    // destructor
    ~Employee();

    // Copy Constructor
    Employee(const Employee &eobj);
};