#include"Student.cpp"
int main()
{
    // Student *obj=new Student();
    // obj->display();
    // std::cout<<std::endl;
    // Student obj1(1,"Aditya",99.8);
    // obj1.display();
 
    // Student s2[3];
    // int r;
    // char nm[20];
    // double mk;
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cout << "Enter roll no : ";
    //     std::cin >> r;
    //     s2[i].setRollNumber(r);
    //     std::cout << "Enter name : ";
    //     std::cin >> nm;
    //     s2[i].setName(nm);
    //     std::cout << "Enter marks : ";
    //     std::cin >> mk;
    //     s2[i].setMarks(mk);
    // }
 
    // for (int i = 0; i < 3; i++)
    // {
    //     s2[i].display();
    //     std::cout << std::endl;
    // }

    // std:: cout<<"====================================";
 
    // int rno;
    // std::cout << "Enter the roll number to search : ";
    // std::cin >> rno;
    // bool flag = false;
    // for (int i = 0; i < 3; i++)
    // {
    //     if (s2[i].getRollNumber() == rno)
    //     {
    //         std::cout << "Student Found : ";
    //         s2[i].display();
    //         flag = true;
    //         break;
    //     }
    // }
    // if (!flag)
    // {
    //     std::cout << "Student not Found";
    // }

    student::printcount();

    student s1,s2(9,"Adi",45);
    student::printcount();
}