#include "address.h"

address::address(std::string c, int pcode):city(c),pincode(pcode)
{
}

void address::display()
{
    std::cout<<"\nPin Code"<<pincode <<"\nCity: " << city;
}

// std::ostream& operator<<(std::ostream& os,address &ad)
// {
//     os<<"Pin Code"<<ad.pincode <<"City: " << ad.city;
// }