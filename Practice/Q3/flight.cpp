#include "flight.h"
// Default constructor
Flight::Flight() : flightNumber("101"), distance(100), flightType("economic"), fuelquantity(2), fare(20)
{
    std::cout << "\nFlight() called ";
}
// Parameterized constructor
Flight::Flight(std::string fno, double dist, std::string ftype) : flightNumber(fno), distance(dist), flightType(ftype)
{
    std::cout << "\nFlight(...) called";
}
// Function to calculate fare
int Flight::calculatefare()
{
    if (distance <= 1000)
    {
        return 5000;
    }
    else if (distance > 1000 && distance <= 1500)
    {
        return 11000;
    }
    else if (distance > 1500 && distance <= 2000)
    {
        return 22000;
    }
   
        return 30000;
    
    
}
// Function to calculate fuel
int Flight::calculatefuel()
{
    int fare = 0;
    if (distance <= 1000)
    {
        fare = 4000;
    }
    else if (distance > 1000 && distance <= 1500)
    {
        fare = 6000;
    }
    else if (distance > 1500 && distance <= 2000)
    {
        fare = 7500;
    }
    else if (distance > 2000)
    {
        fare = 10000;
    }
    return fare;
}
// Function to accept details from user
void Flight::feedinfo()
{
    std::cout << "\nEnter Flight number : ";
    std::cin >> flightNumber;
    std::cout << "\nEnter distance : ";
    std::cin >> distance;
    calculatefare();
    std::cout << "\nEnter Flight Type : ";
    std::cin >> flightType;
}
// Function to display details
void Flight::showinfo()
{
    std::cout << "\nFlight number = " << flightNumber << "\nDistance = " << distance << "\nFlight Type = " << flightType;
}
