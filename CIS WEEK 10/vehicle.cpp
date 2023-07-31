//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 

#include "Vehicle.h"
#include <iostream>
using namespace std;

// Vehicle constructor
Vehicle::Vehicle(const string& manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

// Getter and Setter
string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

// Display information 
void Vehicle::displayInfo() const {
   cout << "Manufacturer: " << manufacturer << endl;
   cout << "Year Built: " << yearBuilt << endl;
}
