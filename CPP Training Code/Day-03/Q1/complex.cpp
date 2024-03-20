#include "complex.h"

complex::complex() : real(0), imag(0) {}

complex::complex(int r, int i) : real(r), imag(i) //<----- another way of writing a constructor
{
    // or we can write
    // real = r;
    // imag = i;
}

void complex::display()
{
    std::cout << real << " + " << imag << "i" << std::endl;
}

bool complex:: operator==(const complex &c2)
{
    return (real == c2.real && imag == c2.imag);
}

complex complex:: operator+(const complex &c2)
{
    complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
}

complex complex:: operator-(const complex &c2)
{
    complex temp2;
    temp2.real = real - c2.real;
    temp2.imag = imag - c2.imag;
    return temp2;
}

complex complex:: operator-()
{
    complex temp3;
    temp3.real = -real; 
    temp3.imag = -imag;
    return temp3;
}

complex& complex::operator++()
{
    ++real;
    ++imag;
    return *this;
} 

complex& complex::operator++(int)
{
    real++;
    imag++;
    return *this;
}

std::ostream& operator<<(std::ostream &os,const complex &cobj)
{
    os<<cobj.real<<" + "<<cobj.imag<<"i";
    return os;
}

// std::istream& operator>>(std::iostream &is, complex &cobj1)
// {
//     std::cout<<"Enter the real values of the object: ";
//     is>>cobj1.real;
//     std::cout<<"Enter the imag values of the object: ";
//     is>>cobj1.imag;
//     return is;
// }