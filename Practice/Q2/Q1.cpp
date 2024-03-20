
// #include<iostream>

// class Student
// {
//     std::string name;
//     int age;
//     int rollno;
//     double marks;

//     public:
//     Student(std::string n,int a,int rno, double m)
//     {
//         name = n;
//         age = a;
//         rollno = rno;
//         marks = m;
//     }

//     bool operator ==(Student &sobj)
//     {
//         return(name==sobj.name && age==sobj.age && rollno==sobj.rollno && marks==sobj.marks);
//     }

// };

// int main()
// {
//     return 0;
// }

#include <iostream>

class Student
{
private:
    std::string name;
    int age;

public: // Constructor
    Student(){};
    Student(std::string n, int a)
    {
        name = n;
        age = a;
    }
    // Equality (==) operator overload
    bool operator==(const Student &other) const
    {
        return name == other.name && age == other.age;
    }

    // Addition (+) operator overload
    Student operator+(const Student &other) const
    {
        Student temp;
        temp.name = name + other.name;
        temp.age = age + other.age;
        return temp;
    }

    // Subtraction (-) operator overload
    Student operator-(const Student &other) const
    {
        Student temp;
        temp.name = name;
        temp.age = age - other.age;
        return temp;
    }

    // Unary (-) operator overload
    Student operator-() const
    {
        Student temp;
        temp.name = name;
        temp.age = -age;
        return temp;
    }

    // += operator overload
    Student operator+=(const Student &other)
    {
        name += other.name;
        age += other.age;
        return *this;
    }

    // -= operator overload
    Student &operator-=(const Student &other)
    {
        age -= other.age;
        return *this;
    }

    // Pre-increment (++student)
    Student &operator++()
    {
        ++age;
        return *this;
    }

    // Post-increment (student++)
    Student operator++(int)
    {
        Student temp = *this;
        ++age;
        return temp;
    }

    // Pre-decrement (--student)
    Student &operator--()
    {
        --age;
        return *this;
    }

    // Post-decrement (student--)
    Student operator--(int)
    {
        Student temp = *this;
        --age;
        return temp;
    }

    // [] Array subscription operator overload
    char operator[](size_t index) const
    {
        if (index < name.size())
        {
            return name[index];
        }
        return '\0'; // Default return if index is out of bounds
    }

    // Istream (>>) operator overload
    friend std::istream &operator>>(std::istream &is, Student &student)
    {
        is >> student.name >> student.age;
        return is;
    }

    // Ostream (<<) operator overload
    friend std::ostream &operator<<(std::ostream &os, const Student &student)
    {
        os << "Name: " << student.name << ", Age: " << student.age;
        return os;
    }
};

int main()
{ // Example usage
    Student s1("Alice", 20);
    Student s2("Bob", 25);

    // Testing operators
    std::cout << "Equality: " << (s1 == s2) << std::endl;
    std::cout << "Addition: " << (s1 + s2) << std::endl;
    std::cout << "Subtraction: " << (s1 - s2) << std::endl;
    std::cout << "Unary -: " << -s1 << std::endl;

    // Increment and Decrement
    ++s1;
    std::cout << "Pre-increment: " << s1 << std::endl;

    s1++;
    std::cout << "Post-increment: " << s1 << std::endl;

    --s2;
    std::cout << "Pre-decrement: " << s2 << std::endl;

    s2--;
    std::cout << "Post-decrement: " << s2 << std::endl;

    // Compound assignment
    s1 += s2;
    std::cout << "+= Operator: " << s1 << std::endl;

    s1 -= s2;
    std::cout << "-= Operator: " << s1 << std::endl;

    // Array subscription
    std::cout << "Array Subscription (2nd character): " << s1[1] << std::endl;

    // Istream and Ostream
    std::cout << "Enter a student (name age): ";
    std::cin >> s1;
    std::cout << "You entered: " << s1 << std::endl;

    return 0;
}