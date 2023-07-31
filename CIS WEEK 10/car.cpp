//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 




#include "Car.h"
#include <iostream>
using namespace std;

// Constructor
Car::Car(const string& manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

// Getter and setter for door
int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

// Display information about the Car
void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors << endl;
}
