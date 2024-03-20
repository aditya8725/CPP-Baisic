#include"Car.h"

Car::Car(){
    _name=new char[2];
    strcpy(_name,"");
    _accelaration=new char[2];
    strcpy(_accelaration,"");
    _topspeed=new char[2];
    strcpy(_topspeed,"");

}

Car::Car(char *nm,char *ac,char *ts){
    _name=new char[strlen(nm)+1];
    strcpy(_name,nm);
    _accelaration=new char[strlen(ac)+1];
    strcpy(_accelaration,ac);
    _topspeed=new char[strlen(ts)+1];
    strcpy(_topspeed,ts);
    
}

Car::~Car(){
    delete _name;
    delete _accelaration;
    delete _topspeed;
}

std::istream& operator>>(std::istream &is, Car &cobj){
    std::cout<<"Enter Name :";
    is>>cobj._name;
    std::cout<<"Enter Acceleration :";
    is>>cobj._accelaration;
    std::cout<<"Enter Top speed :";
    is>>cobj._topspeed;
    
    return is;
}

std::ostream& operator<<(std::ostream &os, Car &cobj){
    os<<"Name :"<<cobj._name;
    os<<"\nAcceleration :"<<cobj._accelaration;
    os<<"\nTop Speed :"<<cobj._topspeed;
}