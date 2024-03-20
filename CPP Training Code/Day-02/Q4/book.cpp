#include <iostream>
#include <cstring>
#include "book.h"

Book::Book()
{
    bookname = new char[10];
    strcpy(bookname, "Java");
    price = 2500;
}

Book::Book(const char *bkname, double pr)
{
    bookname = new char[strlen(bkname) + 1];
    strcpy(bookname, bkname);
    price = pr;
}

void Book::display()
{
    std::cout << "\n Book Name: " << bookname;
    std::cout << "\n price: " << price;
}

