//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 





#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    // Test Vehicle
    string manufacturer;
    int yearBuilt;

    cout << "Enter Vehicle manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "Vehicle Information:" << endl;
    vehicle.displayInfo();
    cout << endl;

    // Test Car
    int numDoors;

    cout << "Enter Car manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter number of doors: ";
    cin >> numDoors;

    Car car(manufacturer, yearBuilt, numDoors);
    cout << "Car Information:" << endl;
    car.displayInfo();
    cout << endl;

    // Test Truck
    int towingCapacity;

    cout << "Enter Truck manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity (in lbs): ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "Truck Information:" << endl;
    truck.displayInfo();

    return 0;
}
