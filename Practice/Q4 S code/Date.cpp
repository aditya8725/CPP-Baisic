#include "Date.h"

Date::Date(int d, int m, int y):day(d),month(m),year(y)
{
}

void Date::display()
{
    std::cout<<"Date of Admission :"<<day<<"\t"<<month<<"\t"<<year<<"\n";
}
