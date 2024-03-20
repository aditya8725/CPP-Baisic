#include<iostream>
#include"3complex.h"

int main()
{
    Complex obj1,obj2,addobj;
    // obj1.Input();
    // obj2.Input();
    std::cin >> obj1;
    std::cin >> obj2;


    std::cout<<"\nOuput of Equals operator: ";
    if(obj1==obj2)
    {
        std::cout<<"Same";
    }
    else
    {
        std::cout<<"Not Same";
    }

    addobj=obj1+obj2;
    std::cout<<"\nOutput of Add: ";
    //addobj.Output();
    std::cout<<addobj;

    Complex subtemp;
    std::cout<<"\nOutput of Sub: ";
    subtemp = obj1- obj2;
    //subtemp.Output();
    std::cout<<subtemp;

    Complex multtemp;
    std::cout<<"\nOutput of Mult: ";
    multtemp = obj1 * obj2;
    //multtemp.Output();
    std::cout<<multtemp;

    Complex preinctemp;
    std::cout<<"\nOutput of Pre-Inc: ";
    preinctemp = ++obj1;
    //preinctemp.Output();
    std::cout<<preinctemp;

    Complex postinctemp;
    std::cout<<"\nOutput of Post-Inc: ";
    postinctemp = obj1++;
    //postinctemp.Output();
    std::cout<<postinctemp;

    Complex predectemp;
    std::cout<<"\nOutput of Pre-dec: ";
    predectemp = --obj1;
    // predectemp.Output();
    std::cout<<predectemp;

    Complex postdectemp;
    std::cout<<"\nOutput of Post-dec: ";
    postdectemp = obj1++;
    //postdectemp.Output();
    std::cout<<postdectemp;

    Complex unaryminustemp;
    std::cout<<"\nOutput of Unary(-): ";
    unaryminustemp = - obj1;
    std::cout<<unaryminustemp;

    return 0;
}