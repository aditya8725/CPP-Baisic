#include <iostream>
#include <cstring>

/*
if a class contains pointer data member tehn implement destructor
otherwise there would be a problem of memory leakage.
*/

class Book
{
    char *bookname;
    double price;

public:
    Book();
    Book(const char *, double);
    void display();

    // destructor
    ~Book();
    // copy constructor
    Book(const Book &);

    void operator=(Book &b4)
    {
        std::cout << "\n In operator = ";
        price = b4.price;
        delete[] bookname;
        bookname = new char[strlen(b4.bookname) + 1];
        strcpy(bookname, b4.bookname);
    }

    Book operator +(const Book &bobj)
    {
        int totprice = bobj.price + price;

        char* totbname = new char[strlen(bobj.bookname) + strlen(bookname)];
        strcpy(totbname,bookname);
        strcat(totbname,bobj.bookname);

        return Book(totbname, totprice);
    }
};

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

Book::~Book()
{
    std::cout << "\n ~Book is called";
    delete bookname; // to avoid memory leakage
}

// copy constructor
// it is required to avoid dangling

/*dangling pointer:
    if 2 pointers of different objects points to same
address then whenever destructor is called for both objects, it tried
to free same smemory 2 times. this is called as dangling pointer
*/
Book::Book(const Book &bobj)
{
    price = bobj.price;
    bookname = new char[strlen(bookname) + 1];
    strcpy(bookname, bobj.bookname);
}

int main()
{
   Book b1("java",1000);
   Book b2("python",800);
   
//    b1=b2;

//    b1.display();

   Book b3=b1+b2;
   b3.display();









    // Book b1;
    // b1.display();

    // Book b2("Python", 1500);
    // b2.display();

    // //    Book *bp = new Book;
    // //   delete bp; // it is a request to call destructor | free object from heap memory, also called destructor.

    // Book b3(b2);
    // b3.display();

    // Book b6("adi",500);
    // Book b7("shiv",900);
    // //b6 = b7;

    // Book b(b7);
}
