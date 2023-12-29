#include "PlaneFlight.h"

//Constructor for PlaneFlight
PlaneFlight::PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage) {

	setName(passengerName);
	setFromCity(fromCity);
	setToCity(toCity);
	setCost(cost);
	setMileage(mileage);

}

//Accessors and Mutators for PlaneFlight Class

//Mutator for mCost
void PlaneFlight::setCost(double cost) {
	//If cost is less than 0, exceute the block of code
	if (cost < 0) {
		//Set cost equal to -1
		mCost = -1;
	}
	else {
		mCost = cost;
	}
}

//Accessor For mCost
double PlaneFlight::getCost() {
	return mCost;
}

//Mutator for mMileage
void PlaneFlight::setMileage(double mileage) {
	//If mileage is less than or equal to 0, executm the block of code
	if (mileage <= 0) {
		//Set mMileage to -1
		mMileage = -1;
	}
	else {
		mMileage = mileage;
	}
}

//Accessor for mMileage
double PlaneFlight::getMileage() {
	return mMileage;
}

//Mutator for mName
void PlaneFlight::setName(string name) {
	//If the name is not an empty string, execute the block of code
	if (name != "") {
		//Set mName to the parameter passed
		mName = name;
	}
}

//Accessor for mName
string PlaneFlight::getName() {
	return mName;
}

//Mutator for mFromCity
void PlaneFlight::setFromCity(string from) {
	//If from is not an empty string and from does not equal to mToCity, execute the block of code
	if (from != "" && from != mToCity) {
		//Set mFromCity equal to from
		mFromCity = from;
	}
}

//Accessor for mFromCity
string PlaneFlight::getFromCity() {
	return mFromCity;
}

//Mutator to mToCity
void PlaneFlight::setToCity(string to) {
	//If to is not an empty string and to does not equal to mFromCity, execute the block of code
	if (to != "" && to != mFromCity) {
		//Set mToCity equal to to
		mToCity = to;
	}
}

//Accessor for mToCity
string PlaneFlight::getToCity() {
	return mToCity;
}
