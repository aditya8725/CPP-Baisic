#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "date.h"

class vehicle
{
    int chasisno;
    int capacity;
    date mfgdate;
    std::string model;

public:
    vehicle();
    vehicle(int cno, int c, date(d), std::string m);
    // void display();

    friend std::ostream &operator<<(std::ostream &os, vehicle &vobj);
    friend std::istream &operator>>(std::istream &is, vehicle &vh);
};

#endif // VEHICLE_H
