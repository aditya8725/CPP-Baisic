#include "vehicle.h"

vehicle::vehicle()
{
    chasisno =0;
    capacity=0;
    model="";
}

vehicle::vehicle(int cno, int c, date(d), std::string m) : chasisno(cno), capacity(c), mfgdate(d), model(m)
{

}

// void vehicle::display()
// {
//     std::cout<<"\nChassis Number: "<<chasisno;
//     std::cout<<"\nCapacity: "<<capacity;
//     mfgdate.display();
//     std::cout<<"\nModel: "<<model;
 
// }


std::ostream &operator<<(std::ostream &os, vehicle &vobj)
{
    os<<"\nChassis Number: "<<vobj.chasisno;
    os<<"\nCapacity: "<<vobj.capacity;
    os<<"\nManufacturing Date: "<<vobj.mfgdate;
    os<<"\nModel: "<<vobj.model;
    return os;
}

std::istream &operator>>(std::istream &is, vehicle &vh)
{
    std::cout<<"Enter Chasis No: ";
    is>>vh.chasisno;
    std::cout<<"Enter Capacity: ";
    is>>vh.capacity;
    std::cout<<"Enter Manufacturing Date:  "<<std::endl;
    is>>vh.mfgdate;
    std::cout<<"Enter Model: ";
    is>>vh.model;

}
