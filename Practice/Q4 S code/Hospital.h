
#include"Doctor.h"
#include"Date.h"
class Hospital
{ 
     std::string hospitalName;
    Doctor dobj;
 Date dateofAdmission;
public:


    Hospital(std::string s, Doctor d, Date dt);
    void display();

   

    std::string getHospitalName() const { return hospitalName; }
    void setHospitalName(const std::string &hospitalName_) { hospitalName = hospitalName_; }
    
};


