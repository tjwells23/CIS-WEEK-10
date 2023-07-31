//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 




#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
using namespace std;


// Car Class
class Car : public Vehicle {
private:
    int numDoors;

public:
    // Car constructer
    Car(const string& manufacturer, int yearBuilt, int numDoors);

    // Getter and Setter
    int getNumDoors() const;
    void setNumDoors(int numDoors);

    // Display information 
    void displayInfo() const;
};

#endif
