#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <string>
using namespace std;

class Employee {
private:
  string name;
  int number;
  string hireDate;
public:
  Employee(string n, int num, string date); //pre: free space in memory. post: Employee object is created with name, number, and hireDate given.
  string getName(); //pre: Employee is valid object. post: returns name.
  int getNumber(); //pre: Employee is valid object. post: returns number.
  string getHireDate(); //pre: Employee is valid object. post: returns hireDate.
  void setName(string n); //pre: Employee is valid object. post: sets name to string given.
  void setNumber(int num); //pre: Employee is valid object. post: sets number to int given.
  void setHireDate(string date); //pre: Employee is valid object. post: sets hireDate to string given.
  void print(); //pre: Employee is valid object. post: prints formatted name, number, and hireDate.
};

#endif