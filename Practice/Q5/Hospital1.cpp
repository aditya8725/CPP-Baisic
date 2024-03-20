#include "Hospital1.h"

Hospital1::Hospital1(std::string s, Doctor1 d, Date1 dt):Hospitalname(s),dobj(d),dateofaddmn(dt)
{

}

void Hospital1::display()
{
    std::cout<<"Hospital Name:\t"<<Hospitalname;
    dobj.display();
    dateofaddmn.display();
}



