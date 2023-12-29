#include "BloodDonation.h"

bool ValidEmployeeID(int EmployeeID);
bool ValidWeight(double EmployeeWeight);
bool ValidAge(int EmployeeAge);

//Constructor for BloodDonation
BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight) {

	//Validation for Employee ID
	if (ValidEmployeeID(EmployeeID)) {
		mID = EmployeeID;
	}
	else {
		mID = -1;
	}

	//Validation for EmployeeAge
	if (ValidAge(EmployeeAge)) {
		mAge = EmployeeAge;
	}
	else {
		mAge = -1;
	}

	//Validation for EmployeeWeight
	if (ValidWeight(EmployeeWeight)) {
		mWeight = EmployeeWeight;
	}
	else {
		mWeight = -1;
	}

}

//Getter for ID
int BloodDonation::getID() {
	return mID;
}

//Setter for ID
void BloodDonation::setID(int EmployeeID) {
	//Validation for EmployeeID
	if (ValidEmployeeID(EmployeeID)) {
		mID = EmployeeID;
	}
	else {
		mID = -1;
	}
}

//Getter for Age
int BloodDonation::getAge() {
	return mAge;
}

//Setter for Age
void BloodDonation::setAge(int EmployeeAge) {
	//Validation for Age
	if (ValidAge(EmployeeAge)) {
		mAge = EmployeeAge;
	}
	else {
		mAge = -1;
	}
}

//Getter for Weight
double BloodDonation::getWeight() {
	return mWeight;
}

//Setter for Weight
void BloodDonation::setWeight(double EmployeeWeight) {
	//Validaton for Weight
	if (ValidEmployeeID(EmployeeWeight)) {
		mWeight = EmployeeWeight;
	}
	else {
		mWeight = -1;
	}
}

bool ValidWeight(double EmployeeWeight) {
	if (EmployeeWeight >= 101.00 && EmployeeWeight <= 280.00) {
		return true;
	}
	return false;
}

bool ValidAge(int EmployeeAge) {
	if (EmployeeAge >= 21 && EmployeeAge <= 65) {
		return true;
	}
	return false;
}

bool ValidEmployeeID(int EmployeeID) {
	int ID = EmployeeID;
	int number_of_digits = 1;
	bool valid_id = false;
	if (ID > 0) {
		while (ID > 9) {
			number_of_digits++;
			ID = ID / 10;
		}
	}

	if (number_of_digits == 6) {
		valid_id = true;
	}

	return valid_id;

}