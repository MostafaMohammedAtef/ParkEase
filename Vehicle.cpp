#include "Vehicle.h"

Vehicle::Vehicle(string newPlate, string newType, string newSize)
{
    plate = newPlate;
    vehicleType = newType;
    size = newSize;
}

void Vehicle::setPlate(string newPlate) { plate = newPlate; }
void Vehicle::setType(string newType) { vehicleType = newType; }
void Vehicle::setSize(string newSize) { size = newSize; }

string Vehicle::getPlate() { return plate; }
string Vehicle::getType() { return vehicleType; }
string Vehicle::getSize() { return size; }