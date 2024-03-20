#include <iostream>
#include <cstring>

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

// Default
Employee::Employee()
{
    id = 0;

    name = new char[1];
    strcpy(name, "");

    age = 0;
    salary = 0.0;
}

// Parameterized Constructor
Employee::Employee(int empid, const char *empname, int empage, double empsal)
{
    id = empid;

    name = new char[strlen(empname) + 1];
    strcpy(name, empname);

    age = empage;
    salary = empsal;
}

// Destructor
Employee::~Employee()
{
    std::cout << "\n~Employee is called for " << name;
    delete[] name;
}

// Display
void Employee::display()
{
    std::cout << "\n  Employee ID: " << id;
    std::cout << "\n Employee Name: " << name;
    std::cout << "\n Employee Age: " << age;
    std::cout << "\n Employee Salary: " << salary;
}

// copy Cosntructor
Employee::Employee(const Employee &eobj)
{
    id = eobj.id;
    name = new char[strlen(eobj.name) + 1];
    strcpy(name, eobj.name);

    age = eobj.age;
    salary = eobj.salary;
}

int main()
{
    Employee e1;
    e1.display();

    std::cout << "\n =============================";
    Employee e2(101, "Aditya", 23, 98000.0);
    e2.display();

    std::cout << "\n =============================";
    Employee e3(e2);
    e3.display();
    
    std::cout << "\n ================================";

    return 0;
}