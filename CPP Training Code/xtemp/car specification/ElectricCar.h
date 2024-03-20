#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include"Car.h"

class ElectricCar:public Car
{
private:
    /* data */
  int _batterycapacity;
  float _timetocharge;
  float _motorpower;
  float _maxpower;
  float _range;


public:
ElectricCar();
    ElectricCar(char *nm,char *ac,char *ts,int, float,float,float,float);
    ~ElectricCar();
    friend std::istream& operator>>( std::istream &is,ElectricCar &eobj);
    friend std::ostream& operator<<( std::ostream &os,ElectricCar &eobj);
    

};


#endif // ELECTRICCAR_H
