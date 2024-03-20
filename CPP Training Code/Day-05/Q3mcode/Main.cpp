#include"Salesperson.h"
#include"Manager.h"
#include<typeinfo>
//vfptr is initialized in constructor 
//vfptr is added in each object
//vtable is created per class/ Only one copy is created.
// static and friend function cannot be made virtual
// constructor cannot be made virtual
// destructor can be virtual
//*** use virtual keyword only in base class function.
/* Whenever base class function is declared as virtual , derive class function
   would be considered as virtual automatically */

/* If we use virtual keyword in derive class ,but not in base class 
then run time polymorphism will not take place. */
/*
A class without virtual function is called as Concrete class and
we can create object/pointer/reference of that class

A class with minimum 1 virtual function is called as Polymorphic class
and we can create object/pointer/reference of that class

A class with 1 or more pure virtual function is called as abstract class
and we can create only pointer/reference of that class.
We cannot create object.
We should override virtual functions in derive classes.
*/
 

int main()
{
    //Salesperson sobj;
    //Employee &eref=sobj;
    
    //eref.display();
    //dynamic_cast throw bad_cast exception on failure if it is reference
   
    // try
    // {
    //     Manager &m=dynamic_cast<Manager&>(eref);
    //     //Salesperson &sref = dynamic_cast<Salesperson&>(eref);
    //     //sref.calCommissionAmount();
    // }
    // catch(std::bad_cast &e)
    // {
    //     std::cout<<"   "<<e.what();
    // }


//dynamic_cast returns zero on failure if it is pointer

//     Employee *e=new Salesperson;
//     Salesperson * sptr =  dynamic_cast<Salesperson*>(e);//down cast
//    //Manager *m=dynamic_cast<Manager*>(e);
//     if(sptr==0)
//         std::cout<<"\n cannot do casting ";
//     else
//        {    std::cout<<"\n casting done ";
//             sptr->calCommissionAmount();
//        }


    // Employee *eptr = new Salesperson;
    // Salesperson* sptr =  dynamic_cast<Salesperson*>(eptr);
    // sptr->calCommissionAmount();



    // Employee *e2=new Manager;
    // Manager *mptr= dynamic_cast<Manager*>(e2);
    // mptr->calIncentive();


   //step1 - convert base class pointer into derive class pointer
   /*
      down cast - convert base class pointer into derive class pointer
      --  dynamic_cast 
      on failure it returns zero
   */

    // eptr->display();
    // std::cout<<"\n Salary  = "<<eptr->calNetSalary();

   // delete eptr;


    // Salesperson *sp=new Salesperson;
    // sp->display();

    // delete sp;


    // Salesperson sp1;
    // sp1.display();
    // std::cout<<"\n Total salary "<<sp1.calNetSalary();
    // std::cout<<"\n -------------------------------\n ";
    // Salesperson sp2(106,"Jay",75000,65000,0.4);
    // sp2.display();
    // std::cout<<"\n Total salary "<<sp2.calNetSalary();

    // std::cout<<"\n -------------------------------\n ";


    Manager mng;
    Employee &eref2=mng;
    mng.display();

    return 0;
}