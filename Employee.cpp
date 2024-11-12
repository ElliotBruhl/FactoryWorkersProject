#include "Employee.hpp"
#include <iostream>

Employee::Employee(string n, int num, string date) {
  name = n;
  number = num;
  hireDate = date;
}
string Employee::getName() {
  return name;
}
int Employee::getNumber() {
  return number;
}
string Employee::getHireDate() {
  return hireDate;
}
void Employee::setName(string n) {
  name = n;
}
void Employee::setNumber(int num) {
  number = num;
}
void Employee::setHireDate(string date) {
  hireDate = date;
}
void Employee::print() {
  cout << "Name: " << name << 
    "\nNumber: " << number << 
    "\nHire Date: " << hireDate << endl;
}