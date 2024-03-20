#ifndef INC_3COMPLEX_H
#define INC_3COMPLEX_H

#include<iostream>

class Complex
{
    int real;
    int imag;

    public:

    friend std::ostream &operator<<(std::ostream &os, const Complex &out);

    friend std::istream &operator>>(std::istream &is, Complex &in);

    // void Input()
    // {
    //     std::cout<<"\nEnter real and imag values: ";
    //     std::cin>>real;
    //     std::cin>>imag;
    // }
    // void Output()
    // {
    //     std::cout<<"\nOutput: "<<real<<" + "<<imag<<"i";
    // }

    Complex operator+(Complex &obj);

    Complex operator-(Complex &obj);

    Complex operator*(Complex &obj);

    Complex operator ++();
    
    Complex operator ++(int);
    
    Complex operator --();

    Complex operator --(int);

    Complex operator -();

    bool operator ==(Complex &obj);

};

#endif // INC_3COMPLEX_H
