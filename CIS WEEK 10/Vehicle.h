//Tyler Wells
//CIS 1202
//7/30/2023
//Inheritance 


#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    // Constructor
    Vehicle(const string& manufacturer, int yearBuilt);


    //getter and setter
    string getManufacturer() const;
    void setManufacturer(const string& manufacturer);
    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);


    //display info
    void displayInfo() const;
};

#endif
