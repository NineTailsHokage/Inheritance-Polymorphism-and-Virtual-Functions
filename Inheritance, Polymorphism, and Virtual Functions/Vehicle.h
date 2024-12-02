#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

class Vehicle {
protected:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(const std::string& manufacturer, int yearBuilt);
    virtual ~Vehicle() {}

    std::string getManufacturer() const;
    void setManufacturer(const std::string& manufacturer);
    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo() const;
};

#endif // VEHICLE_H
