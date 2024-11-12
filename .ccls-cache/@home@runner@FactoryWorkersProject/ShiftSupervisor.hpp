#ifndef SHIFTSUPERVISOR_HPP
#define SHIFTSUPERVISOR_HPP
#include "Employee.hpp"

class ShiftSupervisor : public Employee {
private:
  double annualSalary;
  double annualBonus;
public:
  ShiftSupervisor(string n, int num, string date, double s, double b); //pre: free space in memory. post: Employee child object is created with name, number, and hireDate and ShiftSupervisor is created with salary and bonus given.
  double getAnnualSalary(); //pre: ShiftSupervisor is valid object. post: returns annualSalary.
  double getAnnualBonus(); //pre: ShiftSupervisor is valid object. post: returns annualBonus.
  void setAnnualSalary(double s); //pre: ShiftSupervisor is valid object. post: sets annualSalary to double given.
  void setAnnualBonus(double b); //pre: ShiftSupervisor is valid object. post: sets annualBonus to double given.
  void print(); //pre: ShiftSupervisor is valid object. post: prints formatted name, number, hireDate, annualSalary, and annualBonus.
};

#endif