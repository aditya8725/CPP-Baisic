// #include "Hospital.h"

// Hospital::Hospital() : HospitalName(" ")
// {
//     std::cout<<"\n Hospital() ";
// }

// Hospital::Hospital(std::string, Doctor, Date): HospitalName(name), docobj(Doctor),dateofaddmission(Date)
// {
//     std::cout<<"\n Hospital(...) ";
// }

// std::ostream &operator<<(std::ostream &os, const Hospital &hobj)
// {
//     os<<"Doctor ID: "<<hobj.HospitalName<<std::endl;
//     os<<hobj.docobj<<std::endl;
//     os<<hobj.dateofaddmission<<std::endl;
// }

#include "Hospital.h"

hospital::hospital() : hospitalname("") {}

hospital::hospital(std::string name, doctor doc, date dat) : hospitalname(name), docobj(doc), dateofadmission(dat) {}

std::ostream &operator<<(std::ostream &os, hospital &hobj)
{
    os << "Hospital name : " << hobj.hospitalname << std::endl;
    os << hobj.docobj;
    os << hobj.dateofadmission << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, hospital &hos)
{
    std::cout << "Enter the name of the hospital:";
    is >> hos.hospitalname;
    is >> hos.dateofadmission;
    is >> hos.docobj;
    return is;
}

hospital::~hospital() {}


std::string hospital::getHospitalname() const { return hospitalname; }
void hospital::setHospitalname(const std::string &hospitalname_) { hospitalname = hospitalname_; }

