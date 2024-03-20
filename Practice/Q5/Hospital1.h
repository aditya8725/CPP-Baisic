#include "Doctor1.h"
#include "Date1.h"

class Hospital1
{
private:
    std::string Hospitalname;
    Doctor1 dobj;
    Date1 dateofaddmn;

public:
    Hospital1(std::string s, Doctor1, Date1);
    void display();

    std::string hospitalname() const { return Hospitalname; }
    void setHospitalname(const std::string &hospitalname) { Hospitalname = hospitalname; }
};



