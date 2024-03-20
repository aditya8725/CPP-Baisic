#include "Doctor1.h"

Doctor1::Doctor1(int did, std::string dn):doctorId(did),docName(dn)
{

}

void Doctor1::display()
{
    std::cout<<"\nDoctor ID: "<<doctorId;
    std::cout<<"Doctor Name: "<<docName;
}
