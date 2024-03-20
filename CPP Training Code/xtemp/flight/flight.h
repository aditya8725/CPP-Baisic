
/*

Define a class Flight with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float.
Implement the below listed functions.
i) default constructor
ii) parameterized constructor
iii)  calculateFuelQuantity() function to calculate the value of Fuel as per the following criteria
            Distance                                                       Fuel
            <=1000                                                          500
            more than 1000  and <=2000                    1100
            more than 2000                                          2200
iv)  feedInfo() function to allow user to enter values for Flight Number, Destination, Distance & call function calculateFuelQuantity () to calculate the quantity of Fuel
v) showInfo() function to allow user to view the content of all the data members.
*/


#ifndef FLIGHT_H
#define FLIGHT_H

#include<iostream>
class Flight{
    std::string flightNumber;
    double distance;
    std::string flightType;
    double fuelquantity;
    double fare;

    public:
    Flight();
    Flight(std::string,double,std::string);
    int calculatefare();
    int calculatefuel();
    void feedinfo();
    void showinfo();
   
    double getDistance() const { return distance; }
    void setDistance(double distance_) { distance = distance_; }

    std::string getFlightType() const { return flightType; }
    void setFlightType(const std::string &flightType_) { flightType = flightType_; }

    double getFuelquantity() const { return fuelquantity; }
    void setFuelquantity(double fuelquantity_) { fuelquantity = fuelquantity_; }

    double getFare() const { return fare; }
    void setFare(double fare_) { fare = fare_; }

    std::string getFlightNumber() const { return flightNumber; }
    void setFlightNumber(const std::string &flightNumber_) { flightNumber = flightNumber_; }
};

#endif // FLIGHT_H
