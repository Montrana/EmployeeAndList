#pragma once
class Employee
{
protected:
	double vacationHours;
	double healthCareContributions;
public:
	virtual double getPay() = 0;
	virtual double getVacationTime() = 0;
	virtual double getHealthCareContributions();
};

