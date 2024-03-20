// #include<iostream>

// class Doctor
// {
//     int docId;
//     std::string docName;

//     public:
//     Doctor();
//     Doctor(int did, std::string dn);
//     void display();
//     ~Doctor();
//     friend void operator<<(std::ostream &os, Doctor &d);
    
// };

#ifndef DOCTOR_H
#define DOCTOR_H
 
#include<iostream>
 
class doctor
{
    int doctorid;
    std::string doctorname;
 
public:
 
    doctor();
    ~doctor();
    doctor(int, std::string);
   
    int getDoctorid() const;
    void setDoctorid(int doctorid_);
 
    std::string getDoctorname() const;
    void setDoctorname(const std::string &doctorname_);
 
    friend std::ostream& operator<<(std::ostream &os, doctor &d);
    friend std::istream& operator>>(std::istream &is, doctor &d);

};
 
#endif // DOCTOR_H