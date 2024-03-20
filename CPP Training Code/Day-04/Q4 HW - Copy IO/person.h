#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include "address.h"

class person
{
    std::string name;
    int contact;
    std::string email;
    address paddress;

    public:
    person();
    person(std::string n,int c,std::string e, address(padd));
    //void display();

    friend std::ostream& operator<<(std::ostream& os, person &pobj);
    friend std::istream& operator>>(std::istream& is,person &po);

};

#endif // PERSON_H
