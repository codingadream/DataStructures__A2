// #ifndef PROFESSIONAL_H
// #define PROFESSIONAL_H

#include "employee.h"

class Professional : public Employee {
public:
    Professional(double monthlySalary, int vacationDays);
    // declare other member functions here
private:
    double monthlySalary;
    int vacationDays;
};