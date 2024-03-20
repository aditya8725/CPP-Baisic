#include "Hospital.h"

Hospital::Hospital(std::string s, Doctor  d, Date dt):hospitalName(s),dobj(d),dateofAdmission(dt)
{

}

void Hospital::display()
{
    std::cout<<"Hospital Name:\t"<<hospitalName;
    dobj.display();
    dateofAdmission.display();

}

