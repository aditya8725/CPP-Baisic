#include<iostream>

class address
{
    std::string city;
    int pincode;

    public:
    address(std::string c,int pcode);

    //friend void operator<<(std::ostream &os,address &ad);
    //friend std::ostream& operator<<(std::ostream& os,address &ad);
    void display();
    
};