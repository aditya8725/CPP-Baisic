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
