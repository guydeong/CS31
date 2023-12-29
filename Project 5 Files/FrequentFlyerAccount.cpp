#include "FrequentFlyerAccount.h"

//Constructor for FrequentFlyerAccount
FrequentFlyerAccount::FrequentFlyerAccount(string name) {
	if (name != "") {
		mName = name;
		mBalance = 0;
	}
	
}

//Accessor and Mutators for FrequentFlyerAccount Constructor
//Accessor for mBalance
double FrequentFlyerAccount::getBalance() {
	return mBalance;
}

//Accessor for mName
string FrequentFlyerAccount::getName() {
	return mName;
}

//addFlightToAccount
bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight) {
	//If the name matches the flight name and all the other validators, execute the block of code
	if (mName == flight.getName() && flight.getToCity() != flight.getFromCity() && flight.getCost() > 0 && flight.getToCity() != "" && flight.getFromCity() != "") {
		//Add the mileage to the balance
		mBalance += flight.getMileage();
		return true;
	}
	else {
		return false;
	}
}

//canEarnFreeFlight
bool FrequentFlyerAccount::canEarnFreeFlight(double mileage) {
	//If the balance is equal to or greater to the mileage, execute the block of code
	if (mBalance >= mileage && mileage > 0) {
		return true;
	}
	//Otherwise return false
	else {
		return false;
	}
}

//freeFlight
bool FrequentFlyerAccount::freeFlight(string from, string to, double mileage, PlaneFlight& flight) {
	//If balance is greater than the mileage, execute the block of code
	if (mBalance > mileage && from != to && mileage > 0 && from != "" && to != "") {
		mBalance -= mileage;
		flight.setMileage(mileage);
		flight.setName(mName);
		flight.setFromCity(from);
		flight.setToCity(to);
		flight.setCost(0);

		return true;
	}
	else {
		return false;
	}
}