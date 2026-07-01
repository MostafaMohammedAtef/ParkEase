#pragma once
#include "ParkingSlot.h"
#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Floor
{
private:
  int floorNumber;
  string size;
  queue<ParkingSlot> availableSlots;

public:
  Floor(int newFloorNumber = 0, string newSize = "");
  ParkingSlot findAvailableSlot();
  void returnSlot(ParkingSlot slot);
  bool isFull();
};