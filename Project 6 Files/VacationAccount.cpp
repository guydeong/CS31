#include "VacationAccount.h";

bool ValidEmployeeID(int EmployeeID);
bool ValidWeight(double EmployeeWeight);
bool ValidAge(int EmployeeAge);

//Constructor for VacationAccount
VacationAccount::VacationAccount(int EmployeeID) {
	if (ValidEmployeeID(EmployeeID)) {
		mID = EmployeeID;
	}
	else {
		mID = -1;
	}
	mBalance = 0;

}

//Function to addVacationToAccount
bool VacationAccount::addVacationToAccount(BloodDonation donation) {
	if (mID == donation.getID() && donation.getID() != -1 && donation.getAge() != -1 && donation.getWeight() != -1) {
		mBalance = mBalance + 4;
		return true;
	}
	return false;
}

//Getter for Balance
double VacationAccount::getBalance() {
	return mBalance;
}

//Getter for ID
int VacationAccount::getID() {
	return mID;
}