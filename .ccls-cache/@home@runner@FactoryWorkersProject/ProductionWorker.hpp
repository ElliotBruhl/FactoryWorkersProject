#ifndef PRODUCTIONWORKER_HPP
#define PRODUCTIONWORKER_HPP
#include "Employee.hpp"

class ProductionWorker : public Employee {
private:
  int shift;
  double hourlyPay;
public:
ProductionWorker(string n, int num, string date, int s, double p); //pre: free space in memory and shift is 1 or 2 (1 is default if error). post: Employee child object is created with name, number, and hireDate and ProductionWorker object is created with shift and hourlyPay given.
  int getShift(); //pre: ProductionWorker is valid object. post: returns shift.
  double getHourlyPay(); //pre: ProductionWorker is valid object. post: returns hourlyPay.
  void setShift(int s); //pre: ProductionWorker is valid object and int given is 1 or 2. post: sets shift to int given (no change if invalid).
  void setHourlyPay(double p); //pre: ProductionWorker is valid object. post: sets hourlyPay to double given.
  void print(); //pre: ProductionWorker is valid object. post: prints formatted name, number, hireDate
};

#endif