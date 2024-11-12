#include <iostream>
#include "Employee.hpp"
#include "ProductionWorker.hpp"
#include "ShiftSupervisor.hpp"
#include "TeamLeader.hpp"

int main() {

  Employee e1 = Employee("John Doe", 1, "01/01/2000");
  e1.print();
  cout << "-------------------" << endl;
  ProductionWorker p1 = ProductionWorker("Caleb Doe", 2, "02/02/2000", 2, 10.0);
  p1.print();
  cout << "-------------------" << endl;
  ShiftSupervisor s1 = ShiftSupervisor("Ryan Doe", 3, "03/03/2000", 50000, 10000);
  s1.print();
  cout << "-------------------" << endl;
  TeamLeader tl1 = TeamLeader("George Doe", 4, "04/04/2000", 2, 10.0, 1000, 40, 20);
  tl1.print();
  
  return 0;
}