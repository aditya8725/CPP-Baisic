
#include"Student.h"

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

int student::count=100;
void student::printcount()
{
    std::cout<<"count = "<<count<<std::endl;
}