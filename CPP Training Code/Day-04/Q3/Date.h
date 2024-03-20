// #include<iostream>

// class Date
// {
//     int day;
//     int month;
//     int year;

// public:
    
//     int getDay() const;
//     void setDay(int day_);

//     int getMonth() const;
//     void setMonth(int month_);

//     int getYear() const;
//     void setYear(int year_);

//     friend std::ostream& operator<<(std::ostream& os,const Date &dt);

//     Date& operator=(const Date &d);
// };

#ifndef DATE_H
#define DATE_H
 
#include<iostream>
// #include<cstring>
 
class date
{
    int day;
    int month;
    int year;
 
   
 
    public:
        date();
        date(int date,int month,int year);
        ~date();
        void accept();
 
        int getDay() const;
        void setDay( int day_);
 
        int getMonth() const;
        void setMonth(int month_);
 
        int getYear() const;
        void setYear(int year_);
 
        friend std::ostream& operator<<(std::ostream& os,const date &d);
 
        date& operator=(const date& d);
 
        friend std::istream& operator>>(std::istream& os, date &d);
       
};
 
#endif // DATE_H
 
 