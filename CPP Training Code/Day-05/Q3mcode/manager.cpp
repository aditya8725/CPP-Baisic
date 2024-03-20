#include "manager.h"

Manager::Manager():numberSubordinates(10),incentiveperSub(500)
{
}

Manager::Manager(int id, std::string nm, double sal, int nsub, double ipsub)
:Employee(id,nm,sal),numberSubordinates(nsub),incentiveperSub(ipsub)
{
}

Manager::~Manager()
{
}

void Manager::display()
{
    Employee::display();
    std::cout<<"\nNo. of subordinates: ";
    std::cout<<"\nIncentives per Subordinate";

}

void Manager::calIncentive()
{
    std::cout << "\n In manager fun ";
}
