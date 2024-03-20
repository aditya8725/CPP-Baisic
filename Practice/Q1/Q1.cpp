// #include<iostream>

// class Complex
// {
//     int real;
//     int imag;

//     public:

//     friend std::ostream &operator<<(std::ostream &os, const Complex &out){
//         os << "\nOutput : " << out.real << " + " << out.imag << "i";
//     }

//     friend std::istream &operator>>(std::istream &is, Complex &in){
//         std::cout << "\nEnter real and imag values : ";
//         is >> in.real;
//         is >> in.imag;
//     }

//     // void Input()
//     // {
//     //     std::cout<<"\nEnter real and imag values: ";
//     //     std::cin>>real;
//     //     std::cin>>imag;
//     // }
//     // void Output()
//     // {
//     //     std::cout<<"\nOutput: "<<real<<" + "<<imag<<"i";
//     // }

//     Complex operator+(Complex &obj)
//     {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     Complex operator-(Complex &obj)
//     {
//         Complex temp;
//         temp.real = real - obj.real;
//         temp.imag = imag - obj.imag;
//         return temp;
//     }

//     Complex operator*(Complex &obj)
//     {
//         Complex temp;
//         temp.real = real * obj.real;
//         temp.imag = imag * obj.imag;
//         return temp;
//     }

//     Complex operator ++()
//     {
//         ++real;
//         ++imag;
//         return *this;
//     }

//     Complex operator ++(int)
//     {
//         real++;
//         imag++;
//         return *this;
//     }

//     Complex operator --()
//     {
//         --real;
//         --imag;
//         return *this;
//     }

//     Complex operator --(int)
//     {
//         real--;
//         imag--;
//         return *this;
//     }

//     Complex operator -()
//     {
//         Complex temp;
//         temp.real = -real;
//         temp.imag = -imag;
//         return temp;
//     }

//     bool operator ==(Complex &obj)
//     {
//         return (real == obj.real && imag == obj.imag);
//     }
// };

// int main()
// {
//     Complex obj1,obj2,addobj;
//     // obj1.Input();
//     // obj2.Input();
//     std::cin >> obj1;
//     std::cin >> obj2;


//     std::cout<<"\nOuput of Equals operator: ";
//     if(obj1==obj2)
//     {
//         std::cout<<"Same";
//     }
//     else
//     {
//         std::cout<<"Not Same";
//     }

//     addobj=obj1+obj2;
//     std::cout<<"\nOutput of Add: ";
//     //addobj.Output();
//     std::cout<<addobj;

//     Complex subtemp;
//     std::cout<<"\nOutput of Sub: ";
//     subtemp = obj1- obj2;
//     //subtemp.Output();
//     std::cout<<subtemp;

//     Complex multtemp;
//     std::cout<<"\nOutput of Mult: ";
//     multtemp = obj1 * obj2;
//     //multtemp.Output();
//     std::cout<<multtemp;

//     Complex preinctemp;
//     std::cout<<"\nOutput of Pre-Inc: ";
//     preinctemp = ++obj1;
//     //preinctemp.Output();
//     std::cout<<preinctemp;

//     Complex postinctemp;
//     std::cout<<"\nOutput of Post-Inc: ";
//     postinctemp = obj1++;
//     //postinctemp.Output();
//     std::cout<<postinctemp;

//     Complex predectemp;
//     std::cout<<"\nOutput of Pre-dec: ";
//     predectemp = --obj1;
//     // predectemp.Output();
//     std::cout<<predectemp;

//     Complex postdectemp;
//     std::cout<<"\nOutput of Post-dec: ";
//     postdectemp = obj1++;
//     //postdectemp.Output();
//     std::cout<<postdectemp;

//     Complex unaryminustemp;
//     std::cout<<"\nOutput of Unary(-): ";
//     unaryminustemp = - obj1;
//     std::cout<<unaryminustemp;

//     return 0;
// }