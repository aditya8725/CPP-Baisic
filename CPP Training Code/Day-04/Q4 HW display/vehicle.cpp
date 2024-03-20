#include "vehicle.h"

vehicle::vehicle(int cno, int c, date(d), std::string m): chasisno(cno),capacity(c),mfgdate(d), model(m)
{

}

void vehicle::display()
{
    std::cout<<"\nChassis Number: "<<chasisno;
    std::cout<<"\nCapacity: "<<capacity;
    mfgdate.display();
    std::cout<<"\nModel: "<<model;
}
