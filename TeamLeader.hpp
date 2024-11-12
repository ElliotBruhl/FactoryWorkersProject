#ifndef TEAMLEADER_HPP
#define TEAMLEADER_HPP
#include "ProductionWorker.hpp"

class TeamLeader : public ProductionWorker {
private:
  double monthlyBonus;
  int reqTrainingHours;
  int compTrainingHours;
public:
  TeamLeader(string n, int num, string date, int s, double p, double b, int r, int c); //pre: free space in memory. post: ProductionWorker child object is created with shift and hourly pay given (then makes Employee with name, number, and hireDate given). TeamLeader is created with monthlyBonus, reqTrainingHours, and compTrainingHours given.
  double getMonthlyBonus(); //pre: TeamLeader is valid object. post: returns monthlyBonus.
  int getReqTrainingHours(); //pre: TeamLeader is valid object. post: returns reqTrainingHours.
  int getCompTrainingHours(); //pre: TeamLeader is valid object. post: returns compTrainingHours.
  void setMonthlyBonus(double b); //pre: TeamLeader is valid object. post: sets monthlyBonus to double given.
  void setReqTrainingHours(int r); //pre: TeamLeader is valid object. post: sets reqTrainingHours to int given.
  void setCompTrainingHours(int c); //pre: TeamLeader is valid object. post: sets compTrainingHours to int given.
  void print(); //pre: TeamLeader is valid object. post: prints formatted name, number, hireDate, shift, hourlyPay, monthlyBonus, reqTrainingHours, and compTrainingHours.
};

#endif