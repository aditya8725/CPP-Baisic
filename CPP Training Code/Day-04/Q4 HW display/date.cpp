#include "date.h"

date::date(int d, int m, int y) : day(d), month(m), year(y)
{
}

void date::display()
{
    std::cout<<"\nThe date is(dd/mm/yyyy) : "<<day<<"/"<<month<<"/"<<year;  
}

int date::getDay() const { return day; }
void date::setDay(int day_) { day = day_; }

int date::getMonth() const { return month; }
void date::setMonth(int month_) { month = month_; }

int date::getYear() const { return year; }
void date::setYear(int year_) { year = year_; }

// std::ostream& operator<<(std::ostream& os, const date &d)
// {
//     os<<"The date is(dd/mm/yyyy) : "<<d.day<<"/"<<d.month<<"/"<<d.year;
//     return os;
// }

