#include "Nonprofessional.h"

Nonprofessional::Nonprofessional(double hours, double hourlyPay, double healthcareRate, double vacaRate)
{
	weeklyPay = hours * hourlyPay;
	healthCareContributions = weeklyPay * healthcareRate;
	vacationHours = hours * vacaRate;
}

double Nonprofessional::getPay()
{
	return weeklyPay;
}

double Nonprofessional::getVacationTime()
{
	return vacationHours;
}
