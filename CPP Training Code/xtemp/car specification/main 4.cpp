#include"ElectricCar.h"
#include"DiselCar.h"
int main(){





std::cout<<"Enter choice : 1 for electric car 2 for disel :";
int choice;
std::cin>>choice;

if(choice == 1){
 ElectricCar e;
 std::cin>>e;
 std::cout<<e;
}
else if(choice==2){
    DiselCar d;
    std::cin>>d;
    std::cout<<d;
}







    return 0;
}