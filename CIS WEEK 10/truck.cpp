//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 




#include "Truck.h"
#include <iostream>
using namespace std;

// Truck const
Truck::Truck(const string& manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Get towing
int Truck::getTowingCapacity() const {
    return towingCapacity;
}

// set towing
void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

// Display information
void Truck::displayInfo() const {
    Vehicle::displayInfo();
  cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}
