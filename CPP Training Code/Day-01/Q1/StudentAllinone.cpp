// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

class Student
{
    // attributes/ data members //instance field
    int rollno;
    char name[20];
    double marks;

public:
    Student();                    // default constructor
    Student(int, char *, double); // parameterrizaed construtor
    void display();
    // Getter for roll number
    int getRollNo() const
    {
        return rollno;
    }

    // Setter for roll number
    void setRollNo(int rno)
    {
        rollno = rno;
    }

    // Getter for name
    const char *getName() const
    {
        return name;
    }

    // Setter for name
    void setName(const char *n)
    {
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
    }

    // Getter for marks
    double getMarks() const
    {
        return marks;
    }

    // Setter for marks
    void setMarks(double mk)
    {
        marks = mk;
    }
};

Student ::Student()
{
    rollno = 1;
    strcpy(name, "Aditya");
    marks = 90;
}

Student ::Student(int r, char *nm, double mk)
{
    rollno = r;
    strcpy(name, nm);
    marks = mk;
}

void Student::display()
{
    std::cout << rollno << "\t" << name << "\t" << marks << std::endl;
}
int main()
{
    // Write C++ code here
    Student s[2]; // object is created in stack memory
    // s1.display();

    // Student s2(2,"Shreyaansh",99.99);
    // s2.display();

    // If i want to create object in heap memory not in stack
    // ptr of tudent type
    // Student *stuptr = new Student();
    // stuptr-> display();
    // we use arror function to access the student pointer from function

    // delete stuptr; // must be given or else there  will be a memory leakage

    // Stack me banane k liye
    //  Student s[3] = {
    //      {11,"Jay",88},
    //      {12,"May",78},
    //      {13,"Say",66}
    //  };

    //  for(int i=0;i<3;i++)
    //  {
    //      s[i].display();
    //  }

    // Q) find the record of a given roll number;
    int rno;
    std::cout << "\n Enter roll no to search the record: ";
    std::cin >> rno;
    bool flag = false;

    for (int i = 0; i < 3; i++)
    {
        if (s[i].getRollNo() == rno)
        {
            std::cout << "\n Record found are the details as below: ";
            s[i].display();
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        std::cout << "\n Record not Found....";
    }

    //  std::cout<<"===================";

    //   Student *sp = new Student[2];
    //   for(int i=0;i<3;i++)
    //   {
    //       sp[i].display();
    //   }

//user input
    Student st[2];
    int r;
    char nm[20];
    double mk;

    for (int i = 0; i < 2; i++)
    {
        std::cout << "\n Enter Roll No: ";
        std::cin >> r;
        st[i].setRollNo(r);

        std::cout << "\n Enter Name: ";
        std::cin >> nm;
        st[i].setName(nm);

        std::cout << "\n Enter marks: ";
        std::cin >> mk;
        st[i].setMarks(mk);
    }

    for (int i = 0; i < 2; i++)
    {
        st[i].display();
    }
    return 0;
}