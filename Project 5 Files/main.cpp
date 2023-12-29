//Name: Marc Luzuriaga
//Student UID: 205916585
//Project Name: Project 5

# include <iostream>
#include <string>
# include <cassert>
#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"

using namespace std;

int main() {
	//planeflight shortleg("howard", "lax", "las", 49.00, 285);
	//planeflight longleg("howard", "las", "nyc", 399.00, 2800);

	//planeflight sample("sample", "sample", "sample", 0, 1);
	//frequentflyeraccount account("howard");
	//assert(shortleg.getfromcity() == "lax");
	//assert(shortleg.gettocity() == "las");
	//assert(shortleg.getname() == "howard");
	//assert(to_string(shortleg.getcost()) == "49.000000");
	//assert(to_string(shortleg.getmileage()) == "285.000000");

	//// account balance starts at zero... 
	//assert(std::to_string(account.getbalance()) == "0.000000");
	//assert(account.getname() == "howard");
	//assert(account.canearnfreeflight(3300.00) == false);

	//// flights add to an account balance 
	//assert(account.addflighttoaccount(shortleg) == true);  // returns true because the names match
	//assert(account.addflighttoaccount(longleg) == true);   // returns true because the names match
	//assert(std::to_string(account.getbalance()) == "3085.000000");

	//// free flights reduce an account balance 
	//if (account.canearnfreeflight(285))
	//{
	//	assert(account.freeflight("las", "lax", 285, sample) == true);
	//	// howard earned a free flight... 
	//	assert(sample.getname() == "howard");
	//	assert(std::to_string(sample.getcost()) == "0.000000");
	//	assert(sample.getfromcity() == "las");
	//	assert(sample.gettocity() == "lax");
	//	assert(std::to_string(sample.getmileage()) == "285.000000");
	//	// account has been reduced for this free flight... 
	//	assert(std::to_string(account.getbalance()) == "2800.000000");
	//}
	//else
	//{
	//	assert(false);  // there are enough miles in the account... 
	//}
	//// non-matching names are ignored 
	//planeflight muffin("muffin", "lax", "doggie heaven", 500, 500);
	//assert(account.addflighttoaccount(muffin) == false);
	//assert(std::to_string(account.getbalance()) == "2800.000000");

	////test case 3
	//planeflight f1("howard", "lax", "las", 65.00, 285);
	//f1.settocity("lax");
	//f1.setfromcity("las");
	//assert(f1.gettocity() == "las");
	//assert(f1.getfromcity() == "lax");

	////test case 4
	//planeflight f2("luzuriaga", "lax", "lax", 0, 0);
	//f2.settocity("");
	//f2.setfromcity("");
	//f2.setname("");
	//assert(f2.getfromcity() == "lax");
	//assert(f2.gettocity() == "");
	//assert(f2.getcost() == 0);
	//assert(f2.getmileage() == -1);
	//assert(f2.getname() == "luzuriaga");

	////test case 5
	//planeflight f3("", "lax", "jfk", 1000.43, 4);
	//frequentflyeraccount a1("marc");
	//f3.setname("marc");
	//assert(a1.addflighttoaccount(f3) == true);
	//f3.setcost(-1);
	//f3.settocity("");
	//f3.setmileage(0);
	//assert(a1.addflighttoaccount(f3) == false);
	//assert(f3.getfromcity() == "lax");
	//assert(f3.gettocity() == "jfk");
	//assert(f3.getcost() == -1);
	//assert(f3.getname() == "marc");
	//assert(f3.getmileage() == -1);
	//
	////test case 6
	//planeflight f4("jane smith", "", "chicago", -50, 0);
	//f4.setname("");
	//assert(f4.getname() == "jane smith");
	//assert(f4.getfromcity() == "");
	//assert(f4.gettocity() == "chicago");
	//assert(f4.getcost() == -1);
	//assert(f4.getmileage() == -1);
	//cout << "all tests passed!" << endl;

	////test case 7
	//planeflight shortleg2("howard", "lax", "las", 49.00, 0);
	//planeflight longleg2("howard", "las", "nyc", 399.00, 2800);

	//planeflight sample2("sample", "sample", "sample", 0, 1);
	//frequentflyeraccount account2("howard");
	//assert(shortleg2.getfromcity() == "lax");
	//assert(shortleg2.gettocity() == "las");
	//assert(shortleg2.getname() == "howard");
	//assert(to_string(shortleg2.getcost()) == "49.000000");
	//assert(to_string(shortleg2.getmileage()) == "-1.000000");

	//// account balance starts at zero... 
	//assert(std::to_string(account2.getbalance()) == "0.000000");
	//assert(account2.getname() == "howard");
	//assert(account2.canearnfreeflight(2799.00) == false);

	//// flights add to an account balance 
	//assert(account2.addflighttoaccount(shortleg2) == true);  // returns true because the names match
	//assert(account2.addflighttoaccount(longleg2) == true);   // returns true because the names match
	//assert(account2.addflighttoaccount(f2) == false);
	//assert(std::to_string(account2.getbalance()) == "2799.000000");
	//assert(account2.canearnfreeflight(2799.00) == true);

	//// free flights reduce an account balance 
	//if (account2.canearnfreeflight(285))
	//{
	//	assert(account2.freeflight("las", "lax", 285, sample2) == true);
	//	// howard earned a free flight... 
	//	assert(sample2.getname() == "howard");
	//	assert(std::to_string(sample2.getcost()) == "0.000000");
	//	assert(sample2.getfromcity() == "las");
	//	assert(sample2.gettocity() == "lax");
	//	assert(std::to_string(sample2.getmileage()) == "285.000000");
	//	// account has been reduced for this free flight... 
	//	assert(std::to_string(account2.getbalance()) == "2514.000000");
	//}
	//else
	//{
	//	assert(false);  // there are enough miles in the account... 
	//}

	////test case 8
	//planeflight shortleg1("howard", "lax", "las", 49.00, 0);
	//planeflight longleg1("howard", "las", "nyc", 399.00, 2800);

	//planeflight sample1("sample", "sample", "sample", 0, 1);
	//frequentflyeraccount account1("howard");
	//assert(shortleg1.getfromcity() == "lax");
	//assert(shortleg1.gettocity() == "las");
	//assert(shortleg1.getname() == "howard");
	//assert(to_string(shortleg1.getcost()) == "49.000000");
	//assert(to_string(shortleg1.getmileage()) == "-1.000000");

	//// account balance starts at zero... 
	//assert(std::to_string(account1.getbalance()) == "0.000000");
	//assert(account1.getname() == "howard");
	//assert(account1.canearnfreeflight(2799.00) == false);

	//// flights add to an account balance 
	//assert(account1.addflighttoaccount(shortleg1) == true);  // returns true because the names match
	//assert(account1.addflighttoaccount(longleg1) == true);   // returns true because the names match
	//assert(account1.addflighttoaccount(f2) == false);
	//assert(std::to_string(account1.getbalance()) == "2799.000000");
	//assert(account1.canearnfreeflight(2799.00) == true);

	//// free flights reduce an account balance 
	//if (account1.canearnfreeflight(2850))
	//{
	//	assert(false);  // there are enough miles in the account... 
	//}
	//assert(std::to_string(account1.getbalance()) == "2799.000000");
	//assert(account1.getname() == "howard");
	//return(0);
}



