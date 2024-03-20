#include "address.h"

address::address()
{
    pincode=0;
    city="";
}

address::address(std::string c, int pcode) : city(c), pincode(pcode)
{
}

// void address::display()
// {
//     std::cout<<"\nPin Code"<<pincode <<"\nCity: " << city;
// }


std::istream &operator>>(std::istream &is, address &ad)
{
    std::cout<<"\nEnter Pincode: ";
    is>>ad.pincode;
    std::cout<<"Enter City: ";
    is>>ad.city;
}

std::ostream& operator<<(std::ostream& os,address &ad)
{
    os<<"\nPin Code"<<ad.pincode <<"\nCity: " << ad.city;
    return os;
}