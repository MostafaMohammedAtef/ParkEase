#include <iostream> 

using namespace std;


class Vehicle {
private:
    string plate;
    string vehicleType;
    string size;

public:
    Vehicle(string newPlate = "", string newType = "", string newSize = "") {
        plate = newPlate;
        vehicleType = newType;
        size = newSize;
    }

    void setPlate(string newPlate) {
        plate = newPlate;
    }
    
    void setType(string newType) {
        vehicleType = newType;
    }

    void setSize(string newSize) {
        size = newSize;
    }

    string getPlate() {
        return plate;
    }

    string getType() {
        return vehicleType;
    }

    string getSize(Vehicle vehicle) {
        return size;
    }

    virtual float getHourlyRate() = 0; // Pure virtual function to get the hourly rate for the vehicle


};

class Bus : public Vehicle {
private:
    float hourlyRate = 10.0; // Hourly rate for buses
public:
    Bus(string newPlate = "", string newType = "", string newSize = "") : Vehicle(newPlate, newType, newSize) {}
    float getHourlyRate() {
        return hourlyRate;
    }
};

class Car : public Vehicle {
private:
    float hourlyRate = 5.0; // Hourly rate for cars
public:
    Car(string newPlate = "", string newType = "", string newSize = "") : Vehicle(newPlate, newType, newSize) {}
    float getHourlyRate() {
        return hourlyRate;
    }
};

class Truck : public Vehicle {
private:
    float hourlyRate = 10.0; // Hourly rate for trucks
public:
    Truck(string newPlate = "", string newType = "", string newSize = "") : Vehicle(newPlate, newType, newSize) {}
    float getHourlyRate() {
        return hourlyRate;
    }
};

class Van : public Vehicle {
private:
    float hourlyRate = 5.0; // Hourly rate for vans
public:
    Van(string newPlate = "", string newType = "", string newSize = "") : Vehicle(newPlate, newType, newSize) {}
    float getHourlyRate() {
        return hourlyRate;
    }
};

class Motorcycle : public Vehicle {
private:
    float hourlyRate = 2.0; // Hourly rate for motorcycles
public:
    Motorcycle(string newPlate = "", string newType = "", string newSize = "") : Vehicle(newPlate, newType, newSize) {}
    float getHourlyRate() {
        return hourlyRate;
    }
};

