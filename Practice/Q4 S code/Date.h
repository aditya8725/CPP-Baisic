#include<iostream>
class Date
{
public:
    int day;
    int month;
    int year;

    Date(int ,int ,int);
    void display();
    
};






/*
#include"date.h"
 
date::date() : day(1), month(1), year(2002) {}
 
date::date(int a, int b, int c) : day(a), month(b), year(c) {};
 
void date::accept()
{
    bool flag = false;
    int tempyear, tempmonth, tempday;
    while (!flag)
    {
        std::cout << "Enter the year: ";
        std::cin >> tempyear;
        std::cout << "Enter the month(1-12): ";
        std::cin >> tempmonth;
        if (tempmonth < 1 || tempmonth > 12)
        {
            std::cout << "\nYou have entered an invalid month. Please input valid details.\n";
            // break;
        }
        else if (tempmonth == 1 || tempmonth == 3 || tempmonth == 5 || tempmonth == 7 || tempmonth == 8 || tempmonth == 10 || tempmonth == 12)
        {
            std::cout << "Enter the day(1-31): ";
            std::cin >> tempday;
            if (tempday < 1 || tempday > 31)
            {
                std::cout << "\nYou have entered an invalid day. Please enter valid details.\n";
                // break;
            }
            else
            {
                year = tempyear;
                month = tempmonth;
                day = tempday;
                flag = true;
            }
        }
        else
        {
            std::cout << "Enter the day(1-30): ";
            std::cin >> tempday;
            if (tempday < 1 || tempday > 30)
            {
                std::cout << "\nYou have entered an invalid day. Please enter valid details.\n";
                // break;
            }
            else
            {
                year = tempyear;
                month = tempmonth;
                day = tempday;
                flag = true;
            }
        }
    }
}
 
date::~date() {}
 
int date::getDay() const
{
    return day;
}
 
void date::setDay(int day_)
{
    day = day_;
}
 
int date::getMonth() const
{
    return month;
}
       
void date::setMonth(int month_)
{
    month = month_;
}
 
int date::getYear() const
{
    return year;
}
       
void date::setYear(int year_)
{
    year = year_;
}
 
std::ostream& operator<<(std::ostream& os, const date &d)
{
    os<<"the date of the bill is(dd/mm/yyyy) : "<<d.day<<"/"<<d.month<<"/"<<d.year;
    return os;
}
 
// date& date::operator=(const date& d)
// {
//     if(this != &d)
//     {
//         day = d.day;
//         month = d.month;
//         year = d.year;
//     }
//     return *this;
// }
 
date& date::operator=(const date& d)
{
    if (this != &d)
    {
        day = d.day;
        month = d.month;
        year = d.year;
    }
    return *this;
}
 
std::istream& operator>>(std::istream& is, date &d)
{
    bool flag = false;
    int tempyear, tempmonth, tempday;
    while (!flag)
    {
        std::cout << "Enter the year: ";
        is>> tempyear;
        std::cout << "Enter the month(1-12): ";
        is>> tempmonth;
        if (tempmonth < 1 || tempmonth > 12)
        {
            std::cout << "\nYou have entered an invalid month. Please input valid details.\n";
            // break;
        }
        else if (tempmonth == 1 || tempmonth == 3 || tempmonth == 5 || tempmonth == 7 || tempmonth == 8 || tempmonth == 10 || tempmonth == 12)
        {
            std::cout << "Enter the day(1-31): ";
            is>> tempday;
            if (tempday < 1 || tempday > 31)
            {
                std::cout << "\nYou have entered an invalid day. Please enter valid details.\n";
                // break;
            }
            else
            {
                d.year = tempyear;
                d.month = tempmonth;
                d.day = tempday;
                flag = true;
            }
        }
        else
        {
            std::cout << "Enter the day(1-30): ";
            is>> tempday;
            if (tempday < 1 || tempday > 30)
            {
                std::cout << "\nYou have entered an invalid day. Please enter valid details.\n";
                // break;
            }
            else
            {
                d.year = tempyear;
                d.month = tempmonth;
                d.day = tempday;
                flag = true;
            }
        }
    }
    return is;
}

*/