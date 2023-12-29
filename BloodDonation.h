#ifndef BloodDonation_H
#define BloodDonation_H

#include <iostream>

using namespace std;

class BloodDonation {
private:
	int mID;
	int mAge;
	double mWeight;
public:
	BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);

	int getID();
	void setID(int EmployeeID);

	int getAge();
	void setAge(int EmployeeAge);

	double getWeight();
	void setWeight(double EmployeeWeight);


};


#endif
