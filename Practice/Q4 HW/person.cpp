#include "person.h"

person::person(std::string n, int c, std::string e, address(pa)):name(n),contact(c),email(e),paddress(pa)
{
}

void person::display()
{
    std::cout<<"\nName: "<<name;
    std::cout<<"\nContact: "<<contact;
    std::cout<<"\nEmail: "<<email;
    paddress.display();
}
