#pragma once

#include "Vehicle.h"
#include "ParkingSlot.h"

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Ticket
{
private:
  string plate;
  Vehicle *vehicle;
  ParkingSlot slot;
  int floor;
  time_t entryTime;

public:
  Ticket(string newPlate = "", Vehicle *newVehicle = nullptr, ParkingSlot newSlot = ParkingSlot(), int newFloor = 0, time_t newEntryTime = time(0));

  float calculateFee();
  string getSummary();
};