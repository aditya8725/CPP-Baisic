#include "policy.h"

policy::policy(int pn, date(sdate), date(edate), person(pdetail), vehicle(vdetail), std::string p, int rn, std::string rp)
:policyno(pn), startdate(sdate),enddate(edate),personldetails(pdetail), vehicledetails(vdetail),premium(p), registrationno(rn), regplace(rp)
{

}

void policy::display()
{
    std::cout<<"Your Policy no: "<<policyno;
    startdate.display();
    enddate.display();
    personldetails.display();
    vehicledetails.display();
    std::cout<<"\nPremium: "<<premium;
    std::cout<<"\nRegistration no: "<<registrationno;
    std::cout<<"\nRegistration Place: "<<regplace;
}
