#ifndef PlaneFlight_H
#define PlaneFlight_H

#include <iostream>

using namespace std;

class PlaneFlight {
	private:
		string mName;
		double mCost;
		string mFromCity;
		string mToCity;
		double mMileage;
	public:
		PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage);


		double getCost();
		void setCost(double cost);

		double getMileage();
		void setMileage(double mileage);

		string getName();
		void setName(string name);

		string getFromCity();
		void setFromCity(string from);

		string getToCity();
		void setToCity(string to);
};

#endif