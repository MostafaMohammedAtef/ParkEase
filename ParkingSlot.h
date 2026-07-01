#pragma once
#include <iostream>
#include <string>

using namespace std;

class ParkingSlot
{
private:
  int slotNumber;
  string size;
  bool isAvailable;

public:
  ParkingSlot(int newSlotNumber = 0, string newSize = "", bool newIsAvailable = true);

  void occupy();
  void free();
  bool checkAvailability();
};