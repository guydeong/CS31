//Project Name: Project 3
//Name: Marc Luzuriaga
//UID: 205916585

# include <iostream>
# include <string>
# include <cassert>
using namespace std;
int findindex(string s, char c);
int count(string s, char c);
bool contains(string s, char c);
bool check_integers(string s, size_t starting_index_position, size_t termination_condition_index);
bool no_leading_zeroes(string s, size_t index_position);
int IndexPositionOfNthOccurrence(string s, char c, size_t N);
bool isValidQC(string results);
int passQC(string results);
int defectQC(string results);
int totalQC(string results);
int batches(string results);

int main()
{
	/*assert(isValidQC("") == false);
	assert(isValidQC(" ") == false);
	assert(isValidQC("        ") == false);
	assert(passQC(" ") == -1);
	assert(defectQC(" ") == -1);
	assert(totalQC(" ") == -1);
	assert(batches(" ") == -1);
	assert(isValidQC("Q2p1d1") == true);
	assert(isValidQC("Q2p1d10") == false);
	assert(isValidQC("Q20p1d1") == false);
	assert(isValidQC("Q2p001d1") == false);
	assert(passQC("Q2p1d1") == 1);
	assert(passQC("Q0p0d0") == 0);
	assert(passQC("Q200p200d0Q201p200d1Q150d130p20Q150d130p20") == 440);
	assert(passQC("Q2p1d1                      1") == -1);
	assert(defectQC("Q2p1d1") == 1);
	assert(defectQC("Q02p1d1") == -1);
	assert(defectQC("Q2p01d1") == -1);
	assert(defectQC("Q2p1d01") == -1);
	assert(defectQC("Q1p1d00") == -1);
	assert(defectQC("Q1p00d1") == -1);
	assert(defectQC("Q00p0d0") == -1);
	assert(defectQC("Q200p200d0Q201p200d1Q150d130p20") == 131);
	assert(defectQC("Q2p1d1                             1") == -1);
	assert(defectQC("Q2p1d1 ") == -1);
	assert(defectQC("Q2p 1d1") == -1);
	assert(totalQC("Q2p1d1") == 2);
	assert(totalQC("Q02p1d1") == -1);
	assert(totalQC("Q2p01d1") == -1);
	assert(totalQC("Q2p01d01") == -1);
	assert(totalQC("Q200p200d0Q201p200d1Q150d130p20") == 551);
	assert(totalQC("Q2p1d1 afasfasjf") == -1);
	assert(batches("Q2p1d1 Q2p1d1 Q2p1d1 Q2p1d1 Q2p1d1") == -1);
	assert(batches("Q2+1-1") == -1);
	assert(batches("QQQQQQQQQQQ") == -1);
	assert(batches("Q1p0d1QQ1p0d1") == -1);
	assert(batches("Q200p200d0Q201p200d1Q150d130p20Q1p0d1") == 4);

	cout << "All test cases succeeded" << endl;
	return(0);*/

}

//Function to check whether a string meets the QC requirements
bool isValidQC(string results)
{

	size_t Q_index_position = 0;
	size_t d_index_position = 0;
	size_t p_index_position = 0;

	bool valid_string = false;


	//Count 'Q's, 'p's, 'd's
	size_t number_of_Qs = count(results, 'Q');
	size_t number_of_ps = count(results, 'p');
	size_t number_of_ds = count(results, 'd');


	//Loop through the number of Qs present in the function
	for (size_t i = 1; i <= number_of_Qs; i++)
	{
		//Variables for Requirement 1: Valid 'Q' position and Character
		bool valid_Q = false;

		//Variables for Requirement 2: 'Q', 'p', 'd' exists
		bool Q_exists = false;
		bool p_exists = false;
		bool d_exists = false;
		bool validcharacters = false;

		//Variables for Requirement 3: Check if the integers between the characters are valid.
		bool q_test_results = false;
		bool p_test_results = false;
		bool d_test_results = false;

		//Variables for Requirement 4: No leading zeroes after 'Q', 'p', 'd'
		bool q_no_leading_zeroes = false;
		bool p_no_leading_zeroes = false;
		bool d_no_leading_zeroes = false;

		//Varaibles for Requirement : Check if the number of passes and defects matches the total tests 
		bool equal_tests = false;
		string p_string = "";
		size_t p_integers = 0;
		string d_string = "";
		size_t d_integers = 0;
		string q_string = "";
		size_t q_integers = 0;
		
		

		//Find the index position between 2 'Q's present
		size_t Q_index_position1 = IndexPositionOfNthOccurrence(results, 'Q', i);
		size_t Q_index_position2 = IndexPositionOfNthOccurrence(results, 'Q', i + 1);

		//Set str to the substring between Q_index_position1 & Q_index_position2
		string str = results.substr(Q_index_position1, Q_index_position2 - Q_index_position1);

		//Check if 'Q', 'p', 'd' exist
		if (contains(str, 'Q'))
		{
			Q_exists = true;
		}
		if (contains(str, 'p'))
		{
			p_exists = true;
		}
		if (contains(str, 'd'))
		{
			d_exists = true;
		}

		//Mark the index position for 'Q', 'p', 'd'
		Q_index_position = findindex(str, 'Q');
		p_index_position = findindex(str, 'p');
		d_index_position = findindex(str, 'd');

		//Requirement 1: Check if the index position of 'Q' is at 0
		if (Q_index_position == 0) {
			valid_Q = true;
		}

		//Requirement 2: Check if the number of 'Q's, 'p's, 'd's match
		if (number_of_Qs == number_of_ps && number_of_ps == number_of_ds && number_of_Qs == number_of_ds)
		{
			validcharacters = true;
		}

		//Requirement 3: Check if the integers between the characters are valid
		if (validcharacters == true && Q_exists == true && p_exists == true && d_exists == true)
		{

			//Check if q_test_results are valid
			if (p_index_position - Q_index_position > 1 || d_index_position - Q_index_position > 1)
			{
				//If the integers are valid between Q_index_position and p_index_position or the integers are valid between Q_index_position and d_index_position, return true
				if (check_integers(str, Q_index_position, p_index_position) || check_integers(str, Q_index_position, d_index_position))
					q_test_results = true;
			}

			//Possibility 1: Check if p_test_results and d_test_results are valid if 'p' goes first then 'd' and if 'd's index position is greater than the size of the string
			if (p_index_position < d_index_position && (str.size() - d_index_position - 1) > 0)
			{
				//If the integers between 'p' and 'd' are digits, set p_tests_results to true
				if (check_integers(str, p_index_position, d_index_position))
					p_test_results = true;
				//If the integers between 'd' and the end of the string are digits, set d_tests_results to true
				if (check_integers(str, d_index_position, str.size()))
					d_test_results = true;
			}

			//Possibility 2: Check if p_test_results and d_test_results are valid if 'd' goes first then 'p' and if 'p's index position is greater than the size of the string
			if (d_index_position < p_index_position && (str.size() - p_index_position - 1) > 0)
			{
				//If the integers between 'd' and 'p' are digits, set d_tests_results to true
				if (check_integers(str, d_index_position, p_index_position))
					d_test_results = true;
				//If the integers between 'd' and the end of the string are digits, set p_test_results to true
				if (check_integers(str, p_index_position, str.size()))
					p_test_results = true;
			}

		}

		//Requirement 4: Check if 'Q' 'p' 'd' have no leading zeroes
		if (q_test_results == true && p_test_results == true && d_test_results == true && validcharacters == true && Q_exists == true && p_exists == true && d_exists == true)
		{

			q_no_leading_zeroes = no_leading_zeroes(str, Q_index_position);
			p_no_leading_zeroes = no_leading_zeroes(str, p_index_position);
			d_no_leading_zeroes = no_leading_zeroes(str, d_index_position);

		}

		//Requirement 5: Check if the number of passes and defects matches the total tests 
		if (q_no_leading_zeroes == true && p_no_leading_zeroes == true && d_no_leading_zeroes == true && q_test_results == true && p_test_results == true && d_test_results == true && validcharacters == true && Q_exists == true && p_exists == true && d_exists == true)
		{
			//Convert character integers of 'p' into integers type
			if (p_index_position < d_index_position)
			{
				//Append the digits between p_index_position and d_index_position to p_string
				for (size_t k = p_index_position + 1; k < d_index_position; k++)
				{
					p_string += str.at(k);
				}
			}
			else
			{
				//Otherwise, set p_string to the sub_string from the index position of p to the end of the string
				p_string = str.substr(p_index_position + 1, -1);
			}

			//Convert p_string to integers
			p_integers = stoi(p_string);

			//Convert character integers of 'd' into integers type
			if (d_index_position < p_index_position)
			{
				//Append the digits between d_index_position and p_index_position to d_string
				for (size_t k = d_index_position + 1; k < p_index_position; k++)
				{
					d_string += str.at(k);
				}
			}
			else
			{
				//Otherwise, set d_string to the sub_string from the index position of p to the end of the string
				d_string = str.substr(d_index_position + 1, -1);
			}

			//Convert p_string to integers
			d_integers = stoi(d_string);

			//Convert character integers of 'Q' into integers type
			if (Q_index_position < p_index_position)
			{
				//Append the digits between Q_index_position and p_index_position to q_string
				for (size_t k = Q_index_position + 1; k < p_index_position; k++)
				{
					q_string += str.at(k);
				}
			}
			else
			{
				//Append the digits between Q_index_position and d_index_position to q_string
				for (size_t k = Q_index_position + 1; k < d_index_position; k++)
				{
					q_string += str.at(k);
				}
			}

			//Convert q_string to integers
			q_integers = stoi(q_string);

			//Check if the number of Q tests = number of d tests and number of p tests
			if (q_integers == d_integers + p_integers)
			{
				equal_tests = true;
			}
			else
			{
				equal_tests = false;
			}

		}

		//If all the requirements are met, set valid_string as true and loop to the next string. Otherwise, set valid_string to false
		if (equal_tests == true && q_no_leading_zeroes == true && p_no_leading_zeroes == true && d_no_leading_zeroes == true && q_test_results == true && p_test_results == true && d_test_results == true && validcharacters == true && Q_exists == true && p_exists == true && d_exists == true)
		{
			valid_string = true;
		}
		else
		{
			valid_string = false;
		}

		//If valid string is false, then break out of the loop
		if (valid_string == false)
			break;

	}

	return valid_string;

}

int passQC(string results)
{

	if (isValidQC(results))
	{
		int total_passed_tests = 0;
		size_t d_index_position = 0;
		size_t p_index_position = 0;

		//Count 'Q's
		int number_of_Qs = count(results, 'Q');

		//Loop through the number of Qs present in the function
		for (int i = 1; i <= number_of_Qs; i++)
		{

			//Find the index position between 2 'Q's present
			size_t Q_index_position1 = IndexPositionOfNthOccurrence(results, 'Q', i);
			size_t Q_index_position2 = IndexPositionOfNthOccurrence(results, 'Q', i + 1);

			//Set str1 to the substring between Q_index_position1 & Q_index_position2
			string str = results.substr(Q_index_position1, Q_index_position2 - Q_index_position1);
			string sub_str = "";

			//Mark the index position for 'p' & 'd'
			p_index_position = findindex(str, 'p');
			d_index_position = findindex(str, 'd');

			//Check if p_test_results and d_test_results are valid if 'p' goes first then 'd' and if 'd's index position is greater than the size of the string
			if (p_index_position < d_index_position)
			{
				//Append the digits between p_index_position and d_index_position to the sub_str
				for (size_t k = p_index_position + 1; k < d_index_position; k++)
				{
					sub_str += str.at(k);
				}
			}
			else
			{
				//Otherwise, append the digits between p_index_position to the end of the string.
				sub_str = str.substr(p_index_position + 1, -1);
			}

			//Convert sub string to integers
			int sub_p_total_passed_tests = stoi(sub_str);

			total_passed_tests += sub_p_total_passed_tests;

		}

		return total_passed_tests;

	}
	else
	{
		return -1;
	}
}

int defectQC(string results)
{

	if (isValidQC(results))
	{
		int total_passed_tests = 0;
		size_t d_index_position = 0;
		size_t p_index_position = 0;

		//Count 'Q's
		int number_of_Qs = count(results, 'Q');

		//Loop through the number of Qs present in the function
		for (size_t i = 1; i <= number_of_Qs; i++)
		{

			//Find the index position between 2 'Q's present
			size_t Q_index_position1 = IndexPositionOfNthOccurrence(results, 'Q', i);
			size_t Q_index_position2 = IndexPositionOfNthOccurrence(results, 'Q', i + 1);

			//Set str1 to the substring between Q_index_position1 & Q_index_position2
			string str = results.substr(Q_index_position1, Q_index_position2 - Q_index_position1);
			string sub_str = "";

			//Mark the index position for 'p' & 'd'
			p_index_position = findindex(str, 'p');
			d_index_position = findindex(str, 'd');

			//Check if p_test_results and d_test_results are valid if 'p' goes first then 'd' and if 'd's index position is greater than the size of the string
			if (d_index_position < p_index_position)
			{
				//Append the digits between d_index_position and p_index_position to the sub_str
				for (size_t k = d_index_position + 1; k < p_index_position; k++)
				{
					sub_str += str.at(k);
				}
			}
			else
			{
				//Otherwise, append the digits between d_index_position to the end of the string.
				sub_str = str.substr(d_index_position + 1, -1);
			}

			//Convert sub string to integers
			int sub_total_defect_tests = stoi(sub_str);

			total_passed_tests += sub_total_defect_tests;
		}

		return total_passed_tests;

	}
	else
	{
		return -1;
	}
}

int totalQC(string results)
{

	if (isValidQC(results))
	{
		int total_passed_tests = 0;
		size_t Q_index_position = 0;
		size_t d_index_position = 0;
		size_t p_index_position = 0;

		//Count 'Q's
		int number_of_Qs = count(results, 'Q');

		//Loop through the number of Qs present in the function
		for (size_t i = 1; i <= number_of_Qs; i++)
		{

			//Find the index position between 2 'Q's present
			size_t Q_index_position1 = IndexPositionOfNthOccurrence(results, 'Q', i);
			size_t Q_index_position2 = IndexPositionOfNthOccurrence(results, 'Q', i + 1);

			//Set str1 to the substring between Q_index_position1 & Q_index_position2
			string str = results.substr(Q_index_position1, Q_index_position2 - Q_index_position1);
			string sub_str = "";

			//Mark the index position for 'p' & 'd'
			p_index_position = findindex(str, 'p');
			d_index_position = findindex(str, 'd');

			//Possiblity 1: Check if the index position of 'Q' is less than the index position of 'p' 
			if (Q_index_position < p_index_position)
			{
				//Append the digits between Q_index_position and p_index_position to the sub_str
				for (size_t k = Q_index_position + 1; k < p_index_position; k++)
				{
					sub_str += str.at(k);
				}
			}
			//Possibility 2
			else
			{
				//Append the digits between Q_index_position and d_index_position to the sub_str
				for (size_t k = Q_index_position + 1; k < d_index_position; k++)
				{
					sub_str += str.at(k);
				}
			}

			//Convert sub string to integers
			int sub_total_passed_tests = stoi(sub_str);

			total_passed_tests += sub_total_passed_tests;
		}

		return total_passed_tests;

	}
	else
	{
		return -1;
	}
}

int batches(string results)
{
	if (isValidQC(results))
	{
		return count(results, 'Q');
	}
	else
	{
		return -1;
	}
}

//Function to return the index position of a character in a string
int findindex(string s, char c)
{
	int num = 0;
	for (int k = 0; k != s.size(); k++)
	{
		if (s.at(k) == c)
		{
			num = k;
		}
	}
	return num;
}

//Function to count the number of occurrences of a character in a string
int count(string s, char c)
{
	int q = 0;
	for (int k = 0; k != s.size(); k++)
	{
		if (s.at(k) == c)
			q++;
	}

	return q;
}

//Function to return whether a string contains a character
bool contains(string s, char c)
{
	for (int k = 0; k != s.size(); k++)
	{
		if (s[k] == c)
			return true;
	}
	return false;
}

//Function to check if there are integers between two index positions
bool check_integers(string s, size_t starting_index_position, size_t termination_condition_index)
{
	size_t difference_in_index = termination_condition_index - starting_index_position;

	bool valid_integers = false;
	
	//Ensure that the starting_index_position is equal to the size or less than the string in order to avoid an out of bounds error
	if (starting_index_position <= s.size())
	{
		//Ensure that the difference between the termination_index & starting_index_position is less than one in order to avoid an out of bounds error
		if (difference_in_index <= 1)
		{
			//If the above statement is true, set valid_integers to false in order to avoid out of bounds error
			valid_integers = false;
		}
		else
		{
			//Loop through the index numbers between the starting index position and termination condition index
			for (size_t k = termination_condition_index - 1; k != starting_index_position; k--)
			{
				//If the character within the loop isn't a digit, return false
				if (!isdigit(s.at(k)))
				{
					valid_integers = false;
					break;
				}

				//If the loop finally lands on the starting_index_position, return true. This means that the loop has checked through all of the index positions
				if (k == starting_index_position + 1)
				{
					valid_integers = true;
				}
			}
		}
	}
	else
	{
		//Return false if the starting_index_position is greater than the size of the string. This is to avoid boundary errors in the function.
		valid_integers = false;
	}
	
	return valid_integers;
}

//Function to check if there are leading zeroes starting from an index position
bool no_leading_zeroes(string s, size_t index_position)
{
	//Check if the index position after the parameter index_position equals '0'
	if (s.at(index_position + 1) == '0')
	{
		//If there is no character after the first occurrence of 0, return true
		if (index_position + 2 >= s.size())
		{
			return true;
		}
		//Else if the index position after the first occurrence of the 0 is a digit, return false
		else if (isdigit(s.at(index_position + 2)))
			return false;
		return true;
	}
	return true;

}

//Function to find the Index position of the Nth Occurrence of a character in a string
int IndexPositionOfNthOccurrence(string s, char c, size_t N)
{
	int counter = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s.at(i) == c)
		{
			counter += 1;
		}
		if (counter == N)
			return i;
	}
	return -1;
}

