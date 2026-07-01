#include "Floor.h"
#include <stdexcept>

Floor::Floor(int newFloorNumber, string newSize)
{
  floorNumber = newFloorNumber;
  size = newSize;
}

ParkingSlot Floor::findAvailableSlot()
{
  if (!availableSlots.empty())
  {
    ParkingSlot slot = availableSlots.front();
    availableSlots.pop();
    return slot;
  }
  else
  {
    throw runtime_error("No available slots on this floor.");
  }
}

void Floor::returnSlot(ParkingSlot slot)
{
  availableSlots.push(slot);
}

bool Floor::isFull()
{
  return availableSlots.empty();
}