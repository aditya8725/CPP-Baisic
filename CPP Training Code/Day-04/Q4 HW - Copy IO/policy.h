#ifndef POLICY_H
#define POLICY_H

#include<iostream>
#include "person.h"
#include "vehicle.h"

class policy
{
    int policyno;
    date startdate;
    date enddate;
    person personldetails;
    vehicle vehicledetails;
    std::string premium;
    int registrationno;
    std::string regplace;

    public:
    policy();
    policy(int pn,date(sdate),date(edate),person(pdetail),vehicle(vdetail),std::string  p,int rn,std::string rp);

    // void display();

    int getPolicyno() const { return policyno; }
    void setPolicyno(int policyno_) { policyno = policyno_; }

    friend std::ostream& operator<<(std::ostream &os, policy &polbj);
    friend std::istream &operator>>(std::istream &is, policy &polbj);
};

#endif // POLICY_H
