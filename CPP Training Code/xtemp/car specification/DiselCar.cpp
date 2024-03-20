#include "DiselCar.h"

DiselCar::DiselCar()
{
    ratedFuel=new char[2];
    strcpy(ratedFuel,"");
    ratedCo2=new char[2];
    strcpy(ratedCo2,"");
}

DiselCar::DiselCar(char *nm,char *ac,char *ts,char * rtf, char * rco)
:Car(nm,ac,ts)
{
    ratedFuel=new char[strlen(rtf)+1];
    strcpy(ratedFuel,rtf);
    ratedCo2=new char[strlen(rco)+1];
    strcpy(ratedFuel,rco);
}

DiselCar::~DiselCar()
{
    delete ratedFuel;
    delete ratedCo2;
}

std::istream &operator>>(std::istream &is, DiselCar &dobj)
{
    is>>static_cast<Car&>(dobj);
    std::cout<<"Enter rated fuel :";
    is>>dobj.ratedFuel;
    std::cout<<"enter Rated co2 emmesion :";
    is>>dobj.ratedCo2;
    return is;

}

std::ostream &operator<<(std::ostream &os, DiselCar &dobj)
{
     os<<static_cast<Car&>(dobj);
    os<<"Rated fuel :"<<dobj.ratedFuel;
    os<<"Rated Co2 :"<<dobj.ratedCo2;

}
