//Project Name: Project 4
//Name: Marc Luzuriaga
//UID: 205916585

#include <iostream>
#include <cassert>
using namespace std;

bool hasNoCapitals(const string array[], int n);
int locateMaximum(const string array[], int n);
int shiftLeft(string array[], int n, int amount, string placeholder);
int countFloatingPointValues(const string array[], int n);
int count_occurrences(string s, char c);

int main() {

	/*string fruit[5] = { "apple", "orange", "banana", "peach", "grape" };
	string fruit1[5] = { "apple", "apple", "apple", "apple", "apple" };
	string fruit2[5] = { "apple", "apple", "ap312P341le", "apple", "aplle" };
	string data[5] = { "mamaBbcca", "mamaBbcca", "12,", "98.76", "tyrion" };
	string data1[5] = { "01.0076", "mamaBbcca", "12", "98.76", "tyrion" };
	string data2[11] = { "1", "1.", ".1", "01", ".01", "01.", "1 1", "1 ", "1,000,000", "1..0", "." };
	string data3[11] = { "+", "-",  "- 1", " + 1", "1 + ", ". + 1", " ", " - .1" };
	string data4[5] = { "aa", "aa",  "aa", "aa", "aa" };
	string data5[5] = { "                10         ", "90.2", "10   ", "s", "s" };
	string names[5] = { "Andrew", "Bethany", "Christie", "Danny", "Edward" };
	string folks[8] = { "samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "Jon" };
	string empty[5] = {};
	string folks1[2] = { "Margaery", "samwell" };
	string folks2[5] = { "margaery", "samwell", "banana", "peach", "grapE" };
	string folks3[2] = { "margaerY", "samwell" };
	string folks4[2] = { "margaery", "samwelL" };
	string folks5[2] = { "margaery", "Samwell" };
	string a[6] = { "123", "456", "789", "gamma", "beta", "delta" };*/

	/*cout << shiftLeft(empty, 0, 0, "empty");

	for (int i = 0; i < 5; i++) {
		cout << i << " " << empty[i] << endl;
	}*/

	/*assert(hasNoCapitals(a, 6) == true);
	assert(hasNoCapitals(empty, 5) == true);
	assert(hasNoCapitals(folks, 5) == true);
	assert(hasNoCapitals(folks, 1) == true);
	assert(hasNoCapitals(folks1, 0) == true);
	assert(hasNoCapitals(folks1, -1) == true);
	assert(hasNoCapitals(folks1, 1) == false);
	assert(hasNoCapitals(folks2, 5) == false);
	assert(hasNoCapitals(folks3, 2) == false);
	assert(hasNoCapitals(folks4, 2) == false);
	assert(hasNoCapitals(folks5, 2) == false);
	assert(hasNoCapitals(data, 5) == false);
	assert(hasNoCapitals(data, 2) == false);
	assert(hasNoCapitals(fruit2, 5) == false);
	assert(locateMaximum(empty, 5) == 0);
	assert(locateMaximum(empty, 0) == -1);
	assert(locateMaximum(empty, -1) == -1);
	assert(locateMaximum(data2, 11) == 9);
	assert(locateMaximum(data, 5) == 4);
	assert(locateMaximum(fruit1, 5) == 0);
	assert(locateMaximum(names, 5) == 4);
	assert(countFloatingPointValues(a, 3) == 3);
	assert(countFloatingPointValues(data, 5) == 1);
	assert(countFloatingPointValues(data1, 5) == 3);
	assert(countFloatingPointValues(names, 5) == 0);
	assert(countFloatingPointValues(data2, 11) == 6);
	assert(countFloatingPointValues(data2, 0) == -1);
	assert(countFloatingPointValues(empty, 5) == 0);
	assert(countFloatingPointValues(data3, 1) == 0);
	assert(countFloatingPointValues(data3, 11) == 0);
	assert(countFloatingPointValues(data5, 5) == 1);
	assert(shiftLeft(names, 3, 2, "foo") == 2);
	assert(shiftLeft(data, 5, 2, "aa") == 2);
	assert(shiftLeft(data2, 3, 4000, "aa") == 3);
	assert(shiftLeft(data2, 0, 2, "aa") == -1);
	assert(shiftLeft(data2, 0, -1, "aa") == -1);
	assert(shiftLeft(data2, 0, 0, "aa") == -1);
	assert(shiftLeft(data3, 0, 0, "aa") == -1);
	assert(shiftLeft(fruit, 3, 5, "aa") == 3);
	assert(shiftLeft(fruit, 5, 1000, "Marc") == 5);
	assert(shiftLeft(data2, 0, 0, "aa") == -1);
	assert(shiftLeft(empty, 5, 5, "empty") == 5);
	assert(shiftLeft(empty, 0, 0, "empty") == -1);
	assert(shiftLeft(empty, 1, 1, "empty") == 1);
	assert(shiftLeft(fruit, 1, 0, "aa") == 0);
	assert(shiftLeft(fruit, 1, 1, "aa") == 1);
	assert(shiftLeft(fruit, 0, 0, "aa") == -1);
	assert(shiftLeft(fruit, 2, 2, "aa") == 2);
	assert(shiftLeft(fruit, 4, 100, "aa") == 4);
	assert(shiftLeft(fruit, 5, 100, "aa") == 5);
	assert(shiftLeft(fruit, 5, 5, "aa") == 5);
	
	
	cout << "All test cases passed!";*/

}

int locateMaximum(const string array[], int n) {
	int maximum = 0;
	
	//If the index position is less than or equal to 0, return -1.
	if (n <= 0) {
		return -1;
	}
	//Otherwise, loop through the array to find the maximum
	else{
		//Initialize a variable to store the maximum sting
		string maximum_string = "";
		//Loop through the array
		for (int i = 0; i < n; i++) {
			if (array[i] > maximum_string) {
				//If the string's index position is greater than the maximum string, store the string in the maximum_string array 
				maximum_string = array[i];
				//Record the index position of the maximum value.
				maximum = i;
			}
		}
	}
	return maximum;
}

int countFloatingPointValues(const string array[], int n) {
	
	int counter = 0;

	//If the index position is less than or equal to 0, return -1.
	if (n <= 0) {
		return -1;
	}
	//Otherwise, loop through the array to find the number of floatingpointvalues
	else {
		for (int i = 0; i < n; i++) {
			//Declare and intialize valid_float variables to true. The purpose of the program is to disprove the boolean value.
			bool valid_float = true;
			//Declare and initialize a sub_array to store the array the loop is on.
			string sub_array = array[i];
			int count_periods = count_occurrences(sub_array, '.');
			
			//First Check: Check if the sub_array isn't empty
			if (sub_array == "") {
				valid_float = false;
			}
			
			//Second Check: Check if sub_array is a single decimal point and Number of commas is not greater than 1
			if (sub_array == ".") {
				valid_float = false;
			}
			else if (count_periods > 1) {
				valid_float = false;
			}

			//Third Check: Ensure that all of the characters that are not periods are digits
			for (int j = 0; j != sub_array.size(); j++) {
				if (isdigit(sub_array[j]) == false && sub_array[j] != '.') {
					valid_float = false;
					break;
				}
			}

			if (valid_float == true) {
				counter++;
			}
		}
	}
	return counter;
}

bool hasNoCapitals(const string array[], int n) {

	//If n is less than or equal to 0, return true
	if (n <= 0) {
		return true;
	}
	//Otherwise, check if there is no capitals
	else {

		//Loop through the array
		for (int i = 0; i < n; i++) {
			//Set the individual string to another variable
			string sub_array = array[i];

			//Loop through the elements of the individual string
			for (int j = 0; j < sub_array.size(); j++) {
				//If there is an element within the string that is capital, return false
				if (isupper(sub_array[j])) {
					return false;
					break;
				}
			}
		}

		return true;
	}
}

int shiftLeft(string array[], int n, int amount, string placeholder) {

	//Declare and initialize counter
	int counter = 0;

	//If values of n and amount are less than 0, return -1
	if (n <= 0 || amount < 0) {
		return -1;
	}
	//Otherwise, execute the shiftleft function
	else {
		//Initialize 2 variables: index_position and placeholder_index
		int index_position = n - 1;
		int placeholder_index = n - 1;
		
		//Loop through the array in the amount of times
		for (int i = 0; i < amount; i++) {

			//Loop through the array and replace the next index position with the current index position
			for (int j = 0; j < index_position; j++) {
				array[j] = array[j + 1];
			}

			//If the placeholder_index index is greater than 0, then place a placeholder in the index position and decrement by 1
			if (placeholder_index >= 0) {
				array[placeholder_index] = placeholder;
				placeholder_index--;
			}
			
			//If the counter is less than n, increase the counter
			if (counter < n) {
				counter++;
			}
			
		}
	}
	return counter;
}

int count_occurrences(string s, char c) {
	int counter = 0;
	for (int i = 0; i != s.size(); i++) {
		if (s[i] == c) {
			counter++;
		}
	}
	return counter;
}
