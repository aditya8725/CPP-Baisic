// #include<iostream>
// #include "Doctor.h"
// #include "Date.h"

// class Hospital
// {
//     std::string HospitalName;
//     Doctor docobj;
//     Date dateofaddmission;

//     public:
//     Hospital();
//     Hospital(std::string,Doctor,Date);
//     friend std::ostream& operator<<(std::ostream& os,Hospital &hobj);
// };

#include <iostream>
#include "Doctor.h"
#include "Date.h"

class hospital
{
    std::string hospitalname;
    doctor docobj;
    date dateofadmission;

public:
    hospital();
    hospital(std::string, doctor, date);

    
    friend std::ostream &operator<<(std::ostream &os, hospital &hos);
    friend std::istream &operator>>(std::istream &os, hospital &hos);
    ~hospital();

    std::string getHospitalname() const;
    void setHospitalname(const std::string &hospitalname_);
};