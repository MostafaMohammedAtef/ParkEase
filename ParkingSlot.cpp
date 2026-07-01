#include "ParkingSlot.h"

ParkingSlot::ParkingSlot(int newSlotNumber, string newSize, bool newIsAvailable)
{
    slotNumber = newSlotNumber;
    size = newSize;
    isAvailable = newIsAvailable;
}

void ParkingSlot::occupy() { isAvailable = false; }
void ParkingSlot::free() { isAvailable = true; }
bool ParkingSlot::checkAvailability() { return isAvailable; }
int ParkingSlot::getSlotNumber()
{
    return slotNumber;
}