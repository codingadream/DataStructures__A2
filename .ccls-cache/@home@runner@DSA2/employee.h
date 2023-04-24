#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
    virtual double weeklySalary() const = 0;
    virtual double healthCare() const = 0;
    virtual int vacationDays() const = 0;
    virtual string getType() const = 0;
};


// class NonProfessional : public Employee {
// public:
//     NonProfessional(double hourlyRate, int hoursWorked, int vacationHours);
//     double weeklySalary() const override;
//     double healthCare() const override;
//     int vacationDays() const override;
//     string getType() const override;
// private:
//     double hourlyRate_;
//     int hoursWorked_;
//     int vacationHours_;
// };

#endif  // EMPLOYEE_H