//containemt

#include "Address.h"
#include<string>

Address:: Address() : pincode(400111), city("Pune") {

    std::cout<<"\n Address() ";
}
Address::Address(int pin, std::string ct) : pincode(pin), city(ct) {

     std::cout<<"\n Address(...) ";
}
void  Address::display()
{
    std::cout << " pincode = " << pincode << " city=" << city;
}
void operator<<(std::ostream &os, Address &ad)
{
    os << ad.pincode << "  " << ad.city;
}
Address::~Address()
{
    std::cout<<"\n ~Address() ";
}
