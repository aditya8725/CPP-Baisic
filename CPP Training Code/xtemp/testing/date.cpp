// date.cpp
#include <iostream>
#include "date.h"


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

Date::Date() : day(1), month(1), year(2022), valid(false) {}

Date::Date(int day, int month, int year,bool v) : day(day), month(month), year(year) ,valid(v){
    valid = accept();
}


bool Date::islepayear(int year)
{
    return (year%4==0) && (year%100 !=0)||(year%400==0);
}

bool Date::accept() {
    std::cout << "Enter date (day month year): ";
    std::cin >> day >> month >> year;

    if(year < 1 || year > 9999)
    {
        std::cout << "Invalid year" << std::endl;
        return true;
    }

    if(month < 1 || month > 12)
    {
        std::cout << "Invalid month" << std::endl;
        return true;
    }

    int daysinmonth[13] = {0, 31, 28, 31, 30, 31, 20, 31, 31, 30, 31, 30, 31};
    if ((month == 2) && islepayear(year)) {
        daysinmonth[2] = 29;
    }

    if(day < 1 || day > daysinmonth[month]) {
        std::cout << "Invalid day" << std::endl;
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    if (date.valid) {
        os << date.day << "/" << date.month << "/" << date.year;
    } else {
        os << "Invalid Date";
    }
    return os;
}