#ifndef COMPLEX_H // ctrl + shift + p --> add header guard
#define COMPLEX_H
 
#include<iostream>
 
class complex
{
    int real;
    int imag;
    public:
        complex();
        complex(int,int);
        void display();
        // bool operator==(const complex c2)
        // {
        //     return (real == c2.real && imag == c2.imag);
        // }
        bool operator==(const complex &);
        complex operator+(const complex &);
        complex operator-(const complex &);
 
        complex operator-();
        complex& operator++();
        complex& operator++(int);
 
        friend std::ostream& operator<<(std::ostream &os, const complex &cob);
       
        friend std::istream& operator>>(std::istream &is, complex &cob);
        // complex operator++();
};
 
 
 
#endif // COMPLEX_H