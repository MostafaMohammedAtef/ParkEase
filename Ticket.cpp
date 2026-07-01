#include "Ticket.h"
#include <sstream>

Ticket::Ticket(string newPlate, Vehicle *newVehicle, ParkingSlot newSlot, int newFloor, time_t newEntryTime)
    : plate(newPlate), vehicle(newVehicle), slot(newSlot), floor(newFloor), entryTime(newEntryTime) {}

float Ticket::calculateFee()
{
  if (vehicle == nullptr)
  {
    return 0.0f;
  }

  time_t currentTime = time(0);
  double durationInSeconds = difftime(currentTime, entryTime);
  double durationInHours = durationInSeconds / 3600.0;

  float hourlyRate = vehicle->getHourlyRate();
  return static_cast<float>(durationInHours * hourlyRate);
}

string Ticket::getSummary()
{
  ostringstream oss;

  oss << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
  oss << "  PARKEASE TICKET\n";
  oss << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
  oss << "  Plate       : " << plate << "\n";
  oss << "  Vehicle Type: " << vehicle->getType() << "\n";
  oss << "  Size        : " << vehicle->getSize() << "\n";
  oss << "  Floor       : " << floor << "\n";
  oss << "  Slot        : " << slot.getSlotNumber() << "\n";
  oss << "  Entry Time  : " << ctime(&entryTime);
  oss << "  Hourly Rate : $" << vehicle->getHourlyRate() << "/hr\n";
  oss << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";

  return oss.str();
}