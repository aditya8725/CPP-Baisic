#include<iostream>
#include "complex.cpp"

int main()
{
    complex c1(1,2),c2(4,8);
    c1.display();
    std::cout<<"\n";
    c2.display();
    std::cout<<"\n";

    if(c1==c2)
    {
        std::cout<<"Same";
    }
    else
    {
        std::cout<<"Not Same";
    }

    complex temp = c1+c2;
    std::cout<<"\n Displaying temp: ";
    temp.display();

    complex temp2 = c1-c2;
    std::cout<<"\n Displaying temp2: ";
    temp2.display();

    complex temp3 = -c1;
    std::cout<<"\n Displaying temp3: ";
    temp3.display();

    complex temp4 = ++c1;
    std::cout<<"\n Displaying temp4: ";
    temp4.display();

    complex temp5 = c1++;
    std::cout<<"\n Displaying temp5: ";
    temp5.display();

    std::cout<<"\n Displaying c1: ";
    std::cout<<c1;

    // std::cout<<"\n";
    // complex temp7;
    // std::cin>>temp7;
    // std::cout<<"\n Displaying c4";
    // std::cout<<temp7;
}