#include "policy.h"

policy::policy()
{
    policyno=0;
    registrationno=0;
    regplace="";
}

policy::policy(int pn, date(sdate), date(edate), person(pdetail), vehicle(vdetail), std::string p, int rn, std::string rp)
    : policyno(pn), startdate(sdate), enddate(edate), personldetails(pdetail), vehicledetails(vdetail), premium(p), registrationno(rn), regplace(rp)
{

}

// void policy::display()
// {
//     std::cout<<"Your Policy no: "<<policyno;
//     startdate.display();
//     enddate.display();
//     personldetails.display();
//     vehicledetails.display();
//     std::cout<<"\nPremium: "<<premium;
//     std::cout<<"\nRegistration no: "<<registrationno;
//     std::cout<<"\nRegistration Place: "<<regplace;
// }

std::ostream &operator<<(std::ostream &os, policy &polbj)
{
    os<<"\nYour Policy no: "<<polbj.policyno;
    os<<"\nStart Date: "<<polbj.startdate;
    os<<"\nEnd Date: "<<polbj.enddate;
    os<<"\nPersonal Details: "<<polbj.personldetails;
    //std::cout<<"------------------"<<std::endl;
    os<<"\nVehical Details: "<<polbj.vehicledetails;
    std::cout<<"------------------"<<std::endl;
    //os<<"\nPremium: "<<polbj.premium;
    os<<"\nRegistration no: "<<polbj.registrationno;
    os<<"\nRegistration Place: "<<polbj.regplace;
}


std::istream &operator>>(std::istream &is, policy &polbj)
{
    std::cout<<"Enter Policy Number:  \n";
    is>>polbj.policyno;

    std::cout<<"Enter Start Date:  \n";
    is>>polbj.startdate;

    std::cout<<"Enter End Date:  \n";
    is>>polbj.enddate;

    std::cout<<"Personal Details:  \n";
    is>>polbj.personldetails;

    std::cout<<"Vehicle Details:  \n";
    is>>polbj.vehicledetails;

    std::cout<<"Enter Permium:  ";
    is>>polbj.premium;

    std::cout<<"Enter Registration No.:  ";
    is>>polbj.registrationno;

    std::cout<<"Enter Reg Place:  ";
    is>>polbj.regplace;
}