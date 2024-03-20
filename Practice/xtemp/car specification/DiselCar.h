#ifndef DISELCAR_H
#define DISELCAR_H

#include"Car.h"

class DiselCar:public Car
{
private:
    /* data */
    char *ratedFuel;
    char *ratedCo2;

public:
    DiselCar();
    DiselCar(char *nm,char *ac,char *ts,char *,char *);
    ~DiselCar();
     friend std::istream& operator>>( std::istream &is,DiselCar &dobj);
    friend std::ostream& operator<<( std::ostream &os,DiselCar &dobj);
};


#endif // DISELCAR_H
