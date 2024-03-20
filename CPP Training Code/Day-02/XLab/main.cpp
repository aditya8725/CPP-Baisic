#include<iostream>
#include"employee.cpp"
int main()
{
    Employee e1;
    e1.display();

    std::cout << "\n =============================";
    Employee e2(101, "Aditya", 23, 98000.0);
    e2.display();

    std::cout << "\n =============================";
    Employee e3(e2);
    e3.display();
    
    std::cout << "\n ================================";

    return 0;
}