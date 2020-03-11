#include "Engineer.h"

Engineer::Engineer(int id, string name, int worktime, float rate, float perHour, float participation,
	int budget) :
	Employee(id, name, worktime)
{
	rate = rate;
	pay_in_hour = perHour;
	mParticipation = participation;
	mBudget = budget;
}

float Engineer::countByWorktime()
{
	return worktime * pay_in_hour;
}

float Engineer::countByProject()
{
	return mBudget * mParticipation;
}

void Engineer::calculatePayment()
{
	payment = countByProject() + countByWorktime() + rate;
}