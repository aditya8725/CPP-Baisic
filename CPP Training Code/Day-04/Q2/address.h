#include<iostream>

class Address
{
    int pincode;
    std::string city;

    public:
        Address();
        Address(int pin,std::string ct);
        void display();
        ~Address();
        friend void operator<<(std::ostream &os,Address &ad);
      
};