#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class complex
{
    int real;
    int imag;

public:
    complex();
    complex(int, int);
    void display();

    //== Operator
    bool operator==(const complex &c2);

    // + Operator
    complex operator+(const complex &);

    // - Operator
    complex operator-(const complex &);

    //unary minus (-)
    complex operator-();

    //pre-increment(++a)
    complex& operator++();

    //post-increment
    complex& operator++(int);

    friend std::ostream& operator<<(std::ostream &os, const complex &cobj);

    // friend std::istream& operator>>(std::iostream &is, complex &cobj);


};

#endif // COMPLEX_H
