// #include "Hospital.h"

// #include<iostream>

// int main()
// {
//     Hospital h1("Ashwini Hospita", Doctor(101,"Aditya"),  Date(1,2,2024));

//     std::cout<<h1;

//     return 0;
// }



#include "Hospital.h"
#include<cstring>
 
int main()
{
    hospital h1("Ashwini Hospital", doctor(101, "Aditya"), date(2, 2, 2024));
 
    hospital *hospitals = new hospital[2];
 
    for (int i = 0; i < 2; i++)
    {
        std::cout << "\nDetails of " << i + 1 << " hospital" << std::endl;
        std::cin >> hospitals[i];
        std::cout << std::endl;
    }

    std::cout << "-----------------------------------------------------\n";
    std::cout << "\nDisplaying details : " << std::endl;
    std::cout << "\n-----------------------------------------------------\n";
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Details of " << i + 1 << " hospital" << std::endl;
        std::cout << hospitals[i];
        std::cout << std::endl;
    }
    std::cout << "\n-----------------------------------------------------\n";
 
    std::cout << "\nEnter the name of the hospital to get details : ";
    std::string searchname;
    std::cin>>searchname;
 
    bool customerfound = false;
    for (int i = 0; i < 2; i++)
    {
        if (hospitals[i].getHospitalname() == searchname)
        {
            std::cout << "Detail of Hospital: " << searchname << std::endl;
            std::cout << "------------------ -------\n";
            std::cout << hospitals[i] << std::endl;
            customerfound = true;
            break;
        }
    }
 
    if (!customerfound)
    {
        std::cout << "Invalid name...!! and try again....." << std::endl;
    }
    std::cout << std::endl;
    // break;
 
 

 
    return 0;
}