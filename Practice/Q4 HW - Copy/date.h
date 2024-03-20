#ifndef DATE_H
#define DATE_H

#include<iostream>

class date
{
    int day;
    int month;
    int year;

public:
    date();
    int getDay() const;
    void setDay(int day_);

    int getMonth() const;
    void setMonth(int month_);

    int getYear() const;
    void setYear(int year_);

    date(int d,int m,int y);
    
    friend std::ostream& operator<<(std::ostream& os,const date &d);
    // friend std::istream& operator>>(std::istream& os, date &d);

//    void display();
    friend std::istream& operator>>(std::istream& is,date &d);
    
};

        
#endif // DATE_H
