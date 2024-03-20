#include <iostream>
#include <string>

class Flight {
private:
    int flightNumber;
    std::string destination;
    float distance;
    float fuel;

public:
    // Default constructor
    Flight() {
        flightNumber = 0;
        distance = 0.0;
        fuel = 0.0;
    }

    // Parameterized constructor
    Flight(int fNum, std::string dest, float dist) {
        flightNumber = fNum;
        destination = dest;
        distance = dist;
        calculateFuelQuantity();
    }

    // Function to calculate fuel quantity based on distance
    void calculateFuelQuantity() {
        if (distance <= 1000)
            fuel = 500;
        else if (distance > 1000 && distance <= 2000)
            fuel = 1100;
        else
            fuel = 2200;
    }

    // Function to feed information
    void feedInfo() {
        std::cout << "Enter Flight Number: ";
        std::cin >> flightNumber;
        std::cout << "Enter Destination: ";
        std::cin >> destination;
        std::cout << "Enter Distance: ";
        std::cin >> distance;
        calculateFuelQuantity();
    }

    // Function to display flight information
    void showInfo() {
        std::cout << "Flight Number: " << flightNumber << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Distance: " << distance << std::endl;
        std::cout << "Fuel: " << fuel << std::endl;
    }
};

int main() {
    Flight flight1; // Creating object using default constructor
    flight1.feedInfo(); // Taking user input
    flight1.showInfo(); // Displaying flight information

    Flight flight2(1234, "New York", 1500); // Creating object using parameterized constructor
    flight2.showInfo(); // Displaying flight information

    return 0;
}
