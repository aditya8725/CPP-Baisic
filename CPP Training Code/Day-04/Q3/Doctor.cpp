// #include "Doctor.h"

// Doctor::Doctor() : docId(101), docName("Aditya")
// {
//     std::cout<<"\n Doctor() ";
// }

// Doctor::Doctor(int did, std::string dn) :docId(did),docName(dn)
// {
//     std::cout<<"\n Doctor(...) ";
// }

// void Doctor::display()
// {
//     std::cout<<"Doctor ID: "<<docId <<"Doctor Name: "<<docName;
// }

// Doctor::~Doctor()
// {
//     std::cout<<"\n ~Doctor() ";
// }

// void operator<<(std::ostream &os, Doctor &d)
// {
//     os<<d.docId<< " "<<d.docName;
// }


#include "Doctor.h"
 
int doctor::getDoctorid() const { return doctorid; }
void doctor::setDoctorid(int doctorid_) { doctorid = doctorid_; }
 
std::string doctor::getDoctorname() const { return doctorname; }
void doctor::setDoctorname(const std::string &doctorname_) { doctorname = doctorname_; }
 
doctor::doctor() : doctorid(0), doctorname("john") {}
 
doctor::doctor(int id, std::string name) : doctorid(id), doctorname(name) {}
 
std::ostream& operator<<(std::ostream &os, doctor &d)
{
    os<<"doctor id : "<<d.doctorid<<std::endl;
    os<<"doctor name : "<<d.doctorname<<std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, doctor &d)
{
    std::cout<<"Enter the id of the doctor: ";
    is>>d.doctorid;
    std::cout<<"Enter the name of doctor: ";
    is>>d.doctorname;
    return is;

}

doctor::~doctor() {}