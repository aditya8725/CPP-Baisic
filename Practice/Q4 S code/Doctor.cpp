#include "Doctor.h"

Doctor::Doctor(int id, std::string dname):doctorId(id),doctName(dname)
{

}

void Doctor::display()
{   std::cout<<"\n";
    std::cout<<"Doctor Id :\t"<<doctorId;
    std::cout<<"\n";
    std::cout<<"Doctor Name :\t"<<doctName;
    std::cout<<"\n";
}
