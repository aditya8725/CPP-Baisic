#include <iostream>
#include <cstring>
 
class Student
{
    int rollNumber;
    char name[20];
    double marks;
 
public:
    Student();
    Student(int, const char *, double);
    void display();
   
    int getRollNumber() const { return rollNumber; }
    void setRollNumber(int rollNumber_) { rollNumber = rollNumber_; }
 
    const char *getName() const { return name; }
    void setName(char *name_) { strcpy(name, name_); }
 
    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }
};
