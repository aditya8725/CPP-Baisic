#include "date.h"

date::date(int d, int m, int y) : day(d), month(m), year(y)
{
}

// void date::display()
// {
//     std::cout<<"\nThe date is(dd/mm/yyyy) : "<<day<<"/"<<month<<"/"<<year;  
// }

date::date()
{
    day=0;
    month=0;
    year=0;
}

int date::getDay() const { return day; }
void date::setDay(int day_) { day = day_; }

int date::getMonth() const { return month; }
void date::setMonth(int month_) { month = month_; }

int date::getYear() const { return year; }
void date::setYear(int year_) { year = year_; }


std::istream &operator>>(std::istream &is, date &d)
{
    std::cout<<"Enter the day: ";
    is>>d.day;
    std::cout<<"Enter the month: ";
    is>>d.month;
    std::cout<<"Enter the year: ";
    is>>d.year;
}

std::ostream& operator<<(std::ostream& os, const date &d)
{
    os<<"\nThe date is(dd/mm/yyyy) : "<<d.day<<"/"<<d.month<<"/"<<d.year;
    return os;
}
