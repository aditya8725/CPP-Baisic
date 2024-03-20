#include "person.h"

person::person()
{
    name="";
    contact=0;
    email="";
}

person::person(std::string n, int c, std::string e, address(padd)) : name(n), contact(c), email(e), paddress(padd)
{
}

// void person::display()
// {
//     std::cout<<"\nName: "<<name;
//     std::cout<<"\nContact: "<<contact;
//     std::cout<<"\nEmail: "<<email;
//     paddress.display();
// }

std::ostream& operator<<(std::ostream& os, person &pobj)
{
    os<<"\nName: "<<pobj.name;
    os<<"\nContact: "<<pobj.contact;
    os<<"\nEmail: "<<pobj.email;
    os<<"\nAddress: "<<pobj.paddress;
    
}

std::istream &operator>>(std::istream &is, person &po)
{
    std::cout<<"Enter Name: ";
    is>>po.name;
    std::cout<<"Enter Contact: ";
    is>>po.contact;
    std::cout<<"Enter Email: ";
    is>>po.email;
    std::cout<<"Enter Address: ";
    is>>po.paddress;
}


