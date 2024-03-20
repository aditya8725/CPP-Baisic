#include<iostream>
#include "date.h"

class vehicle
{
    int chasisno;
    int capacity;
    date mfgdate;
    std::string model;

    public:
        vehicle(int cno,int c,date(d),std::string m);
        void display();
};