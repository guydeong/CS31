//Project Name: Project 2
//Author: Marc Luzuriaga
//UID: 205916585

#include <iostream>
#include <string>

using namespace std;

int main() {

	//variables for user input
	string statename;
	string month;
	double amount;
	int day;
	int year;

	//variables for calculation of the tax
	double stateTaxRate = 0;
	double avgLocalTaxRate = 0;
	double levy = 0;
	double paymentamount = 0;

	//ask for the state name
	cout << "State Name: ";
	getline(cin, statename);
	//ask for the purchase amount
	cout << "Purchase amount: ";
	cin >> amount;
	cin.clear();
	cin.ignore(10000, '\n');
	//ask for the month
	cout << "Provide the month: ";
	getline(cin, month);
	//ask for the day
	cout << "Provide the day: ";
	cin >> day;
	cin.clear();
	cin.ignore(10000, '\n');
	//ask for the year
	cout << "Provide the year: ";
	cin >> year;
	
	//Check if input of the statename matches the states
	if (statename == "Alabama" || statename == "Alaska" || statename == "Arizona" || statename == "Arkansas" || statename == "California" || statename == "Colorado" || statename == "Connecticut" || statename == "Delaware" || statename == "Florida" || statename == "Georgia" || statename == "Hawaii" || statename == "Idaho" || statename == "Illinois" || statename == "Indiana" || statename == "Iowa" || statename == "Kansas" || statename == "Kentucky" || statename == "Louisiana" || statename == "Maine" || statename == "Maryland" || statename == "Massachusetts" || statename == "Michigan" || statename == "Minnesota" || statename == "Mississippi" || statename == "Missouri" || statename == "Montana" || statename == "Nebraska" || statename == "Nevada" || statename == "New Hampshire" || statename == "New Jersey" || statename == "New Mexico" || statename == "New York" || statename == "North Carolina" || statename == "North Dakota" || statename == "Ohio" || statename == "Oklahoma" || statename == "Oregon" || statename == "Pennsylvania" || statename == "Rhode Island" || statename == "South Carolina" || statename == "South Dakota" || statename == "Tennessee" || statename == "Texas" || statename == "Utah" || statename == "Vermont" || statename == "Virginia" || statename == "Washington" || statename == "West Virginia" || statename == "Wisconsin" || statename == "Wyoming")
	{
		//Check if amount is greater than 0
		if (amount > 0)
		{
			//Check if month matches the months
			if (month == "January" || month == "February" || month == "March" || month == "April" || month == "May" || month == "June" || month == "July" || month == "August" || month == "September" || month == "October" || month == "November" || month == "December")
			{
				//Check if day matches the days in the month
				if (day >= 1 && day <= 31)
				{
					//Check if year is between 1 and 2025 (inclusive)
					if (year >= 1 && year <= 2025)
					{
						//block of code to check state and then set tax rate
						if (statename == "Alabama")
						{
							stateTaxRate = 4.00;
							avgLocalTaxRate = 5.14;
							levy = 0.00;
							
							//Tax free date for this state
							if (month == "July" && day >= 15 && day <= 17)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}

						}
						else if (statename == "Alaska")
						{
							stateTaxRate = 0.00;
							avgLocalTaxRate = 1.43;
							levy = 0.00;
						}
						else if (statename == "Arizona")
						{
							stateTaxRate = 5.6;
							avgLocalTaxRate = 2.77;
							levy = 0.00;
						}
						else if (statename == "Arkansas")
						{
							stateTaxRate = 6.50;
							avgLocalTaxRate = 2.93;
							levy = 0.00;
							if (month == "August" && day >= 6 && day <= 7)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "California")
						{
							stateTaxRate = 7.25;
							avgLocalTaxRate = 1.31;
							levy = 1.00;
						}
						else if (statename == "Colorado")
						{
							stateTaxRate = 2.90;
							avgLocalTaxRate = 4.73;
							levy = 0.00;
						}
						else if (statename == "Connecticut")
						{
							stateTaxRate = 6.35;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
							if (month == "August" && day >= 21 && day <= 27)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0.00;
							}
						}
						else if (statename == "Delaware")
						{
							stateTaxRate = 0.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "Florida")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 1.05;
							levy = 0.00;
						}
						else if (statename == "Georgia")
						{
							stateTaxRate = 4.00;
							avgLocalTaxRate = 3.29;
							levy = 0.00;
						}
						else if (statename == "Hawaii")
						{
							stateTaxRate = 4.00;
							avgLocalTaxRate = 0.41;
							levy = 0.00;
						}
						else if (statename == "Idaho")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.03;
							levy = 0.00;
						}
						else if (statename == "Illinois")
						{
							stateTaxRate = 6.25;
							avgLocalTaxRate = 2.49;
							levy = 0.00;
						}
						else if (statename == "Indiana")
						{
							stateTaxRate = 7.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "Iowa")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.82;
							levy = 0.00;
							if (month == "August" && day >= 5 && day <= 6)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Kansas")
						{
							stateTaxRate = 6.50;
							avgLocalTaxRate = 2.17;
							levy = 0.00;
						}
						else if (statename == "Kentucky")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "Louisiana")
						{
							stateTaxRate = 4.45;
							avgLocalTaxRate = 5.00;
							levy = 0.00;
						}
						else if (statename == "Maine")
						{
							stateTaxRate = 5.50;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "Maryland")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
							if (month == "August" && day >= 14 && day <= 20)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Massachusetts")
						{
							stateTaxRate = 6.25;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
							if (month == "August" && day >= 14 && day <= 15)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Michigan")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "Minnesota")
						{
							stateTaxRate = 6.88;
							avgLocalTaxRate = 0.55;
							levy = 0.00;
						}
						else if (statename == "Mississippi")
						{
							stateTaxRate = 7.00;
							avgLocalTaxRate = 0.07;
							levy = 0.00;
							if (month == "July" && day >= 29 && day <= 30)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Missouri")
						{
							stateTaxRate = 4.23;
							avgLocalTaxRate = 3.9;
							levy = 0.00;
							if (month == "April" && day >= 19 && day <= 25)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Montana")
						{
							stateTaxRate = 0.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "Nebraska")
						{
							stateTaxRate = 5.50;
							avgLocalTaxRate = 1.35;
							levy = 0.00;
						}
						else if (statename == "Nevada")
						{
							stateTaxRate = 6.85;
							avgLocalTaxRate = 1.29;
							levy = 0.00;
							if (month == "August" && day >= 5 && day <= 7)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "New Hampshire")
						{
							stateTaxRate = 0.00;
							avgLocalTaxRate = 0.00;
							levy = 0.00;
						}
						else if (statename == "New Jersey")
						{
							stateTaxRate = 6.63;
							avgLocalTaxRate = -0.03;
							levy = 0.00;
						}
						else if (statename == "New Mexico")
						{
							stateTaxRate = 5.13;
							avgLocalTaxRate = 2.69;
							levy = 0.00;
						}
						else if (statename == "New York")
						{
							stateTaxRate = 4.00;
							avgLocalTaxRate = 4.49;
							levy = 0.00;
						}
						else if (statename == "North Carolina")
						{
							stateTaxRate = 4.75;
							avgLocalTaxRate = 2.22;
							levy = 0.00;
						}
						else if (statename == "North Dakota")
						{
							stateTaxRate = 5.00;
							avgLocalTaxRate = 1.85;
							levy = 0.00;
						}
						else if (statename == "Ohio")
						{
							stateTaxRate = 5.75;
							avgLocalTaxRate = 1.42;
							levy = 0.00;
							if (month == "August" && day >= 5 && day <= 7)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Oklahoma")
						{
							stateTaxRate = 4.50;
							avgLocalTaxRate = 4.42;
							levy = 0.00;
							if (month == "August" && day >= 6 && day <= 8)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Oregon")
						{
							stateTaxRate = 0;
							avgLocalTaxRate = 0;
							levy = 0;
						}
						else if (statename == "Pennsylvania")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.34;
							levy = 0;
						}
						else if (statename == "Rhode Island")
						{
							stateTaxRate = 7.00;
							avgLocalTaxRate = 0;
							levy = 0;
						}
						else if (statename == "South Carolina")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 1.43;
							levy = 0;
							if (month == "August" && day >= 5 && day <= 7)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "South Dakota")
						{
							stateTaxRate = 4.5;
							avgLocalTaxRate = 1.9;
							levy = 0.00;
						}
						else if (statename == "Tennessee")
						{
							stateTaxRate = 7.00;
							avgLocalTaxRate = 2.47;
							levy = 0.00;
							if (month == "July" && day >= 29 && day <= 31)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Texas")
						{
							stateTaxRate = 6.25;
							avgLocalTaxRate = 1.94;
							levy = 0.00;
							if (month == "August" && day >= 5 && day <= 7)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Utah")
						{
							stateTaxRate = 5.95;
							avgLocalTaxRate = 0.99;
							levy = 1.25;
						}
						else if (statename == "Vermont")
						{
							stateTaxRate = 6;
							avgLocalTaxRate = 0.18;
							levy = 0;
						}
						else if (statename == "Virginia")
						{
							stateTaxRate = 5.3;
							avgLocalTaxRate = 0.35;
							levy = 1;
						}
						else if (statename == "Washington")
						{
							stateTaxRate = 6.5;
							avgLocalTaxRate = 2.67;
							levy = 0;
						}
						else if (statename == "West Virginia")
						{
							stateTaxRate = 6.00;
							avgLocalTaxRate = 0.39;
							levy = 0.00;
							if (month == "August" && day >= 5 && day <= 7)
							{
								stateTaxRate = 0;
								avgLocalTaxRate = 0;
								levy = 0;
							}
						}
						else if (statename == "Wisconsin")
						{
							stateTaxRate = 5.00;
							avgLocalTaxRate = 0.44;
							levy = 0;
						}
						else if (statename == "Wyoming")
						{
							stateTaxRate = 4.00;
							avgLocalTaxRate = 1.36;
							levy = 0;
						}

						// formula to calculate the payment amount usign the amount, stateTaxRate, avgLocalTaxRate, and Levy
						paymentamount = amount + ((amount * (stateTaxRate + avgLocalTaxRate + levy)) / 100);
						//"Magic Formula" for setting decimal places to the hundreds place
						cout.setf(ios::fixed);
						cout.precision(2);

						//output the payment amount
						cout << "Please pay a total of " << "$" << paymentamount;
					}
					else
					{
						cout << "Invalid year!";
					}
				}
				else
				{
					cout << "Invalid day!";
				}
			}
			else
			{
				cout << "Invalid month!";
			}
		}
		else
		{
			cout << "Invalid amount!";
		}
	}
	else
	{
		cout << "Invalid state!";
	}

return 0;

	


}