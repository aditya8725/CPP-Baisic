#include"complex.h"
 
complex::complex():real(0),imag(0)
{
 
}
 
complex::complex(int r, int i):real(r)
{
    imag=i;
}
 
void complex::display()
{
    std::cout<<real<<"+"<<imag<<"i";
}
 
bool complex::operator==(const complex &c2)
{
    return (real == c2.real && imag == c2.imag);
}
 
complex complex::operator+(const complex &c2)
{
    complex temp;
    temp.real = real+c2.real;
    temp.imag = imag+c2.imag;
    return temp;
}
 
complex complex::operator-(const complex &c2)
{
    complex temp;
    temp.real = real - c2.real;
    temp.imag = imag - c2.imag;
    return temp;
}
 
complex complex::operator-()
{
    complex temp;
    temp.real = -real;
    temp.imag = -imag;
    return temp;
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
    os<<cobj.real<<"+"<<cobj.imag<<"i";
    return os;
}
 
std::istream& operator>>(std::istream &is, complex &cobj)
{
    std::cout<<"enter the real value of the object : ";
    is>>cobj.real;
    std::cout<<"enter the value of imag of object : ";
    is>>cobj.imag;
    return is;
}