#include <iostream>
#include "Car.h"
#include "Truck.h"

int main() {
    std::string manufacturer;
    int yearBuilt;

    // Vehicle input
    std::cout << "Enter vehicle manufacturer and year built: ";
    std::getline(std::cin, manufacturer);
    std::cin >> yearBuilt;
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();
    std::cin.ignore(); // Clear the newline character from the input buffer

    // Car input
    int numberOfDoors;
    std::cout << "Enter car manufacturer, year built and number of doors: ";
    std::getline(std::cin, manufacturer);
    std::cin >> yearBuilt >> numberOfDoors;
    Car car(manufacturer, yearBuilt, numberOfDoors);
    car.displayInfo();
    std::cin.ignore(); // Clear the newline character from the input buffer

    // Truck input
    int towingCapacity;
    std::cout << "Enter truck manufacturer, year built, and towing capacity: ";
    std::getline(std::cin, manufacturer);
    std::cin >> yearBuilt >> towingCapacity;
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    return 0;
}