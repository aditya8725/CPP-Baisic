
#include<iostream>
#include "policy.h"

int main()
{
    date d(1,11,2001);
    date d1(1,2,2010);
    date d2(2,12,2020);
    address a("Pune",530011);
    person p("Aditya",98661,"adi@gmail.com",a);
    vehicle v(10012,4,d,"BMW");
    
    policy pl(111,d1,d2,p,v,"Monthly",222,"Mumbai");
     pl.display();
     std::cout<<"\n===============================================\n";

    policy parr[3] = {
        {111,d1,d2,p,v,"Monthly",222,"Mumbai"},
        {222,d1,d2,p,v,"Half-Yearly",333,"Goa"},
        {333,d1,d2,p,v,"Yearly",444,"Delhi"},

    };

    for(int i=0;i<3;i++)
    {
        std::cout<<"\nDisplaying Details: "<<i+1<<std::endl;
        parr[i].display();
        std::cout<<"\n---------------------------------\n";
    }


//searching through policy no
    int key;
    std::cout<<"\nEnter the policy number to search: \n";
    std::cin>>key;
    bool flag=false;
    for(int i=0;i<3;i++)
    {
        if(key==parr[i].getPolicyno())
        {
            std::cout<<"\nFound...!!!\n";
            parr[i].display();
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        std::cout<<"\nSooryy Not Found.....\n";
    }

}