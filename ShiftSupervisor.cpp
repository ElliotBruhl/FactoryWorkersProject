#include "ShiftSupervisor.hpp"
#include <iostream>

ShiftSupervisor::ShiftSupervisor(string n, int num, string date, double s, double b) : Employee(n, num, date) {
  annualSalary = s;
  annualBonus = b;
}
double ShiftSupervisor::getAnnualSalary() {
  return annualSalary;
}
double ShiftSupervisor::getAnnualBonus() {
  return annualBonus;
}
void ShiftSupervisor::setAnnualSalary(double s) {
  annualSalary = s;
}
void ShiftSupervisor::setAnnualBonus(double b) {
  annualBonus = b;
}
void ShiftSupervisor::print() {
  cout << "Name: " << getName() << 
    "\nNumber: " << getNumber() << 
    "\nHire Date: " << getHireDate() <<
    "\nAnnual Salary: $" << annualSalary <<
    "\nAnnual Bonus: $" << annualBonus << endl;
}