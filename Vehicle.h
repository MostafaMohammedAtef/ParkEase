#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
  string plate;
  string vehicleType;
  string size;

public:
  Vehicle(string newPlate = "", string newType = "", string newSize = "");

  void setPlate(string newPlate);
  void setType(string newType);
  void setSize(string newSize);

  string getPlate();
  string getType();
  string getSize();

  virtual float getHourlyRate() = 0;

  virtual ~Vehicle() {}
};