
#include"Student.h"
#include<cstring>
Student::Student()
{
    rollNumber = 1;
    strcpy(name, "Rahul");
    marks = 90.5;
    count++;
}
Student::Student(int r, const char *nm, double mk)
{
    rollNumber = r;
    strcpy(name, nm);
    marks = mk;
    count++;
}
 
void Student::display()
{
    std::cout << rollNumber << " ";
    std::cout << name << " ";
    std::cout << marks;
}

int Student::count;
void Student:: printcount() 
{
    std::cout<<"\nCount:  "<<count;
}