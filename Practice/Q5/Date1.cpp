#include "Date1.h"

Date1::Date1()
{
}

Date1::Date1(int d, int m, int y): day(d),month(m),year(y)
{

}

void Date1::display()
{
    std::cout<<"Date of Admission: "<<day<<"/"<<month<<"/"<<year;
}
