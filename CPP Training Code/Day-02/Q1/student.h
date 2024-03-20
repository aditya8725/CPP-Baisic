#include <iostream>
#include <cstring>
 
class Student
{
    int rollNumber;
    char name[20];
    double marks;
    static int count;
    /*
        static data member:
        -stored in data section/ default value is zero;
        -single copy is created per class
        -this copy can be shared by all objects
        -static variable is also called class variable;

        static member function:
            -called by using class name
            -will not receive this pointer- so can access static memory only
    */
public:
    Student();
    Student(int, const char *, double);
    void display();
    static void printcount();
   
    int getRollNumber() const { return rollNumber; }
    void setRollNumber(int rollNumber_) { rollNumber = rollNumber_; }
 
    const char *getName() const { return name; }
    void setName(char *name_) { strcpy(name, name_); }
 
    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }
};
