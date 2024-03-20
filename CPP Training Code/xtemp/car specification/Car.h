#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<cstring>

class Car
{
private:
    /* data */
    char* _name;
    char* _accelaration;
    char* _topspeed;

public:
    Car();
   Car(char *,char *,char *);
     ~Car();
    friend std::istream& operator>>(std::istream &is, Car &cobj);
    friend std::ostream& operator<<(std::ostream &os, Car &cobj);

};
 // CAR_H

#endif // CAR_H
