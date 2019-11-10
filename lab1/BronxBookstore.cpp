//Application replicating a bookstore transaction
#include <iostream>

using namespace std;

int main()
{
	//declares variables for the order
	string firstName;
	int cervNum;
	int homeNum;
	int shakesNum;
	float payment;
	float change;  
	
	//Greets and begins taking order
	cout << "Welcome to the Bronx Bookstore!\n";
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter number of Cervantes books: ";
	cin >> cervNum;
	cout << "Enter number of Homer books: ";
	cin >> homeNum;
	cout << "Enter number of Shakespeare books: ";
	cin >> shakesNum;
	
	//declares variables for computation
	float cervPrice;
	float homePrice;
	float shakesPrice;
	float tax;
	float totalBeforetax;
	float totalAftertax;
	
	//assigns prices to respective books
	cervPrice = 41.25;
	homePrice = 15.85;
	shakesPrice = 30.50;   
	
	//calculating total
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	totalBeforetax = (cervPrice * cervNum) + (homePrice * homeNum) +
		(shakesPrice * shakesNum);
	tax = totalBeforetax * (.1);
	totalAftertax = totalBeforetax + tax;

	//Tells customer total after tax and asks for amount pay 
	cout << "Total cost of order is: " << "$" << totalAftertax << endl;
	cout << "How much money will you pay? $";
	cin >> payment;
	
	//declares variables of individual book(s) total price
	float cervTotal;
	float homeTotal;
	float shakesTotal; 

	//individual book(s) total price computation
	cervTotal = cervPrice * cervNum;
	homeTotal = homePrice * homeNum;
	shakesTotal = shakesPrice * shakesNum;
	
	//written receipt
	cout << "--------" << endl;		
	cout << "Customer: " << firstName << endl;
	cout << "--------" << endl;
	cout << "Item          Number          Price" << endl;
	cout << "Cervantes     " << cervNum << "               " << "$" 
		<< cervTotal << endl;
	cout << "Homer         " << homeNum << "               " << "$" 
		<< homeTotal << endl;
	cout << "Shakespeare   " << shakesNum << "               " << "$" 
		<< shakesTotal << endl;
	cout << "--------" << endl;
	cout << "Tax" << "                           " << "$" << tax <<  endl;
	cout << "--------" << endl;
	cout << "Total" << "                         " << "$" << totalAftertax  			<< endl;
	cout << "User Pay" << "                      " << "$" << payment 
		<< endl;
	cout << "--------" << endl;

	//Change computation
	change = payment - totalAftertax;

	//Change amount and end receipt
	cout << "Change" << "                        " << "$" << change 
		<< endl; 
	
	return 0;
} 



