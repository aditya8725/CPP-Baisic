#include<iostream>
class Book
{
    char *bookname;
    double price;

public:
    Book();
    Book(const char *, double);
    void display();
};