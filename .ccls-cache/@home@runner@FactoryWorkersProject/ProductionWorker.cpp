#include "ProductionWorker.hpp"
#include <iostream>

ProductionWorker::ProductionWorker(string n, int num, string date, int s, double p) : Employee(n, num, date) {
  if (s == 1 || s == 2)
    shift = s;
  else
    shift = 1;
  hourlyPay = p;
}
int ProductionWorker::getShift() {
  return shift;
}
double ProductionWorker::getHourlyPay() {
  return hourlyPay;
}
void ProductionWorker::setShift(int s) { //1 is day, 2 is night
  if (s == 1 || s == 2)
    shift = s;
  else
    cout << "Invalid shift number. Please input 1 for day shift or 2 for night shift." << endl;
}
void ProductionWorker::setHourlyPay(double p) {
  hourlyPay = p;
}
void ProductionWorker::print() {
  cout << "Name: " << getName() << 
    "\nNumber: " << getNumber() << 
    "\nHire Date: " << getHireDate() << 
    "\nShift: ";
  if (shift == 1)
    cout << "Day\n";
  else
    cout << "Night\n";
  cout << "Hourly Pay: $" << hourlyPay << endl;
}