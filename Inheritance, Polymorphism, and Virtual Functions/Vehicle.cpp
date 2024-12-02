#include "Vehicle.h"

Vehicle::Vehicle(const std::string& manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {
}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(const std::string& manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << std::endl;
}