#include "TeamLeader.hpp"
#include <iostream>

TeamLeader::TeamLeader(string n, int num, string date, int s, double p, double b, int r, int c) : ProductionWorker(n, num, date, s, p) {
  monthlyBonus = b;
  reqTrainingHours = r;
  compTrainingHours = c;
}
double TeamLeader::getMonthlyBonus() {
  return monthlyBonus;
}
int TeamLeader::getReqTrainingHours() {
  return reqTrainingHours;
}
int TeamLeader::getCompTrainingHours() {
  return compTrainingHours;
}
void TeamLeader::setMonthlyBonus(double b) {
  monthlyBonus = b;
}
void TeamLeader::setReqTrainingHours(int r) {
  reqTrainingHours = r;
}
void TeamLeader::setCompTrainingHours(int c) {
  compTrainingHours = c;
}
void TeamLeader::print() {
  
}
