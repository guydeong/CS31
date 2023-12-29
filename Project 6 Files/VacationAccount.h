#ifndef VacationAccount_H
#define VacationAccount_H

#include <iostream>
#include "BloodDonation.h"

using namespace std;
class VacationAccount {
private:
	int mID;
	double mBalance;
public:
	VacationAccount(int EmployeeID);
	double getBalance();
	int getID();
	bool addVacationToAccount(BloodDonation donation);
};



#endif
