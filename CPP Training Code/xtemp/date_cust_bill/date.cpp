// date.cpp
#include <iostream>
#include "date.h"

Date::Date() : day(1), month(1), year(2022) {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

// void Date::accept() {
//     std::cout << "Enter date (day month year): ";
//     std::cin >> day >> month >> year;

//     // Validation
//     if (month < 1 || month > 12 || day < 1 || day > 31) {
//         std::cerr << "Invalid date entered. Setting to default date." << std::endl;
//         day = 1;
//         month = 1;
//         year = 2022;
//         return;
//     }

//     if (month == 2 && (day < 1 || day > 28)) {
//         std::cerr << "Invalid day for February. Setting to default date." << std::endl;
//         day = 1;
//         month = 1;
//         year = 2022;
//     } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
//         std::cerr << "Invalid day. Setting to default date." << std::endl;
//         day = 1;
//         month = 1;
//         year = 2022;
//     }
// }

void Date::accept()
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

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}

Date& Date::operator=(const Date& other) {
    if (this != &other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }
    return *this;
}

/*
bool date::islepayear(int year)
{
    return (y%4==0) && (year%100 !=0)||(year%400==0)
}

bool Date::accept() {
    std::cout << "Enter date (day month year): ";
    std::cin >> day >> month >> year;

    if(year<1 && year>9999)
    {
        return false;
    }

    if(month<1 && month>12)
    {
        return false;
    }

    int daysinmonth[13] ={0,31,28,31,30,31,20,31,31,30,31,30,31};
    if(month ==2)&& islepayear(year);
    daysinmonth[2]=29;

    if(day <1&& day>daysinmonth[month])
    {
        return false;
    }
    return true;
}

*/


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
    os<<"the date of the bill is(dd/mm/yyyy) "<<d.day<<"/"<<d.month<<"/"<<d.year;
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
 

*/