#include "Nonprofessional.h"

Nonprofessional::Nonprofessional(double hours, double hourlyPay, double healthcareRate, double vacaRate)
{
	pay = hours * hourlyPay;
	healthCareContributions = pay * healthcareRate;
	vacationTime = hours * vacaRate;
}

const double Nonprofessional::getPay()
{
	return pay;
}

const double Nonprofessional::getVacationTime()
{
	return vacationTime;
}
