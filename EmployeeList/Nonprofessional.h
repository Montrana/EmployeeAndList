#pragma once
#include "Employee.h"
class Nonprofessional :
    public Employee
{
public:
    /// <summary>
    /// Non professional constructor
    /// </summary>
    /// <param name="hours">hours worked per week</param>
    /// <param name="hourlyPay">Hourly Pay</param>
    /// <param name="healthcareRate">How much of pay is put towards healthcare</param>
    /// <param name="vacaRate">How many hours are earned of vacation per hour worked</param>
    Nonprofessional(double hours, double hourlyPay, double healthcareRate, double vacaRate);
    /// <summary>
    /// Gets the weekly pay for the employee
    /// </summary>
    /// <returns>the weekly pay</returns>
    const double getPay();
    /// <summary>
    /// Gets the amount of vacation hours they get per week
    /// </summary>
    /// <returns>vacation hours per week</returns>
    const double getVacationTime();
};

