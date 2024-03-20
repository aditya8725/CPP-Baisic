#include "ElectricCar.h"

ElectricCar::ElectricCar():_batterycapacity(10),_timetocharge(4),_motorpower(5),_maxpower(10),_range(111)
{
}

ElectricCar::ElectricCar(char *nm,char *ac,char *ts,int bt, float tc, float mp, float mxp, float range)
:Car( nm, ac, ts),_batterycapacity(bt),_timetocharge(tc),_motorpower(mp),_maxpower(mxp),_range(range)
{
    
}

ElectricCar::~ElectricCar()
{
}

std::istream &operator>>(std::istream &is, ElectricCar &eobj)
{
    is>>static_cast<Car&>(eobj);
    std::cout<<"Enter battery capacity :";
    is>>eobj._batterycapacity;
    std::cout<<"Enter time to charge :";
    is>>eobj._timetocharge;
    std::cout<<"Enter motor power :";
    is>>eobj._motorpower;
    std::cout<<"Enter Max power :";
    is>>eobj._maxpower;
    std::cout<<"Enter Range :";
    is>>eobj._range;
    return is;

}

std::ostream &operator<<(std::ostream &os, ElectricCar &eobj)
{
    os<<static_cast<Car&>(eobj);
    os<<"\nBattery capacity :"<<eobj._batterycapacity;
    os<<"\nTime to charge :"<<eobj._timetocharge;
    os<<"\nMotor Power :"<<eobj._motorpower;
    os<<"\nMax Power :"<<eobj._maxpower;
    os<<"\nRange :"<<eobj._range;
    return os;
}
