//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 





#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    // truck const
    Truck(const string& manufacturer, int yearBuilt, int towingCapacity);

    // get towing set towing
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);

    // Display information 
    void displayInfo() const;
};

#endif
