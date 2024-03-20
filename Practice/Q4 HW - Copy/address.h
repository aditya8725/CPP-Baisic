#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>

class address
{
    std::string city;
    int pincode;

    public:
    address();
    address(std::string c,int pcode);

    //friend void operator<<(std::ostream &os,address &ad);
    friend std::ostream& operator<<(std::ostream& os,address &ad);
    
    
    // void display();
    
    friend std::istream& operator>>(std::istream& is,address &ad);
};

#endif // ADDRESS_H
