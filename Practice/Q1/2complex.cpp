
#include<iostream>
#include "3complex.h"

std::ostream &operator<<(std::ostream &os, const Complex &out){
        os << "\nOutput : " << out.real << " + " << out.imag << "i";
    }

    std::istream &operator>>(std::istream &is, Complex &in){
        std::cout << "\nEnter real and imag values : ";
        is >> in.real;
        is >> in.imag;
    }

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

    Complex Complex::operator+(Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    Complex Complex::operator-(Complex &obj)
    {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    Complex Complex::operator*(Complex &obj)
    {
        Complex temp;
        temp.real = real * obj.real;
        temp.imag = imag * obj.imag;
        return temp;
    }

    Complex Complex::operator ++()
    {
        ++real;
        ++imag;
        return *this;
    }

    Complex Complex::operator ++(int)
    {
        real++;
        imag++;
        return *this;
    }

    Complex Complex::operator --()
    {
        --real;
        --imag;
        return *this;
    }

    Complex Complex::operator --(int)
    {
        real--;
        imag--;
        return *this;
    }

    Complex Complex::operator -()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

    bool Complex::operator ==(Complex &obj)
    {
        return (real == obj.real && imag == obj.imag);
    }
