#include"complex.h"
#include<iostream>
 
int main()
{
    complex c1(1,2),c2(4,8),c3(5,10);
    std::cout<<"\ndisplaying c1 : ";
    c1.display();
    std::cout<<"\n";
    std::cout<<"\ndisplaying c2 : ";
    c2.display();
    std::cout<<"\n";
    std::cout<<"\ndisplaying c3 : ";
    c3.display();
    std::cout<<"\n";
    if(c1==c2)
    {
        std::cout<<"same";
    }
    else
    {
        std::cout<<"Not same\n";
    }
 
    complex temp = c1+c2+c3;
    std::cout<<"displaying temp : ";
    temp.display();
 
    complex temp1 = c1-c2;
    std::cout<<"\ndisplaying temp1 : ";
    temp1.display();
 
    complex temp2 = -c1;
    std::cout<<"\ndisplaying temp2 : ";
    temp2.display();
 
    complex temp3 = ++c1;
    std::cout<<"\ndisplaying temp3 : ";
    temp3.display();
 
 
    complex temp4 = c1++;
    std::cout<<"\ndisplaying temp4 : ";
    temp4.display();
    // int a =3;
    // int b =4;
    // int x = a+b;
    // std::cout<<x;
    std::cout<<"\ndisplaying c1 & c2: ";
    std::cout<<c1<<"\n"<<c2;
 
    // std::cout<<"\ndisplaying c1 & c2: ";
 
    std::cout<<"\n\n\n";
    complex c4;
    std::cin>>c4;
    std::cout<<"\ndisplaying c4 : ";
    std::cout<<c4;
 
}