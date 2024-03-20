
#include<iostream>
// #include "Doctor1.h"
// #include "Date1.h"
#include "Hospital1.h"
int main()
{
    Doctor1 d(101,"Aditya");
    Date1 dt(1,2,2024);
    Hospital1 h("Ashwini",d,dt);
    h.display();
}


//  // Doctor d(101,"shubham");
//     // Date dt(1,2,2024);
//     // Hospital h("ruby clinic",d,dt);
//     // h.display();

//     Hospital hp[3]={{"Appolo",Doctor(101,"shubham"),Date(1,2,2025)},
//     {"Ruby Clinic",Doctor(101,"Aditya"),Date(10,5,2023)},
//     {"Rims",Doctor(101,"Madhav"),Date(8,4,2022)}
//     };
//     for(int i=0;i<3;i++){
//         hp[i].display();
//     }

//     std::string key;
//     std::cout<<"\nEnter the name of hospital : \t";
//     std::cin>>key;
//      bool flag=false;
//     for(int i=0;i<3;i++){
//         if(key==hp[i].getHospitalName()){
//             std::cout<<"Hospital name found";
//             hp[i].display();
//             flag=true;
//             break;
//         }
//     }

//     if(!flag){
//         std::cout<<"not Found";
//     }