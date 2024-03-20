#include "Salesperson.h"

// vfptr is initialized in constructor 
// vfptr is added in each class
// vtable is created per class/only one copy is created.

//static and friend cannot be virtual
//Constructor cannot be amde virtual.
//Destructor has to be virtual
//NOTE: Use virtual only for base class function
//whenever the base class function is declared as virtual, derived class function would be considered as virtual automatically

//if we use virtual keyword in derive class, but not in base class thrn run time polymorphism will not take place;


/*
A class without virtual function is called as concrete class and we can create object/pointer/reference of that class;

A class with minimum 1 virtual function is called polymorphic class and we can create object/pointer/reference of that class;

A class with minimum 1 pure virtual function is called abstract class and we can create pointer/reference of that class;
we cannot create object



*/

int main()
{
    // SalesPerson sp1;
    // sp1.display();
    // std::cout<<"\nTotal Salary: "<<sp1.calNetSalary();

    // std::cout<<"\n==============================\n";

    // SalesPerson sp2(102,"Aditya",75000,15000,0.04);
    // sp2.display();
    // std::cout<<"\nTotal Salary: "<<sp2.calNetSalary();

    // std::cout<<"\n===============================\n";

   

// creating in heap 
    // SalesPerson *sp = new SalesPerson;
    // sp->display();

    // delete sp;

    // Employee *eptr = new SalesPerson;
    // eptr->display();
    // std::cout<<"\nTotal Salary: ";
    // std::cout<<eptr->calNetSalary();

    // delete eptr;




    Employee *eptr = new SalesPerson;


    //eptr->print()
    //  we have to do typecasting to access child class function specifically.

    /*
    Step-1: convert base class pointer into derive class pointer
    -> down cast--> convert base clas to derive class pointer.
    dynamic_cast
    */

   SalesPerson* sptr = dynamic_cast<SalesPerson*>(eptr);
   sptr->commissionamount();
    return 0;
}