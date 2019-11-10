#include<iostream>
using namespace std;

int main()
{
	
	//initial greeting variables
	char destination, day;
	int time;
	float price;

	//Outputs greeting and asks for inputs
	cout << "Welcome to Fordham Airlines!" << endl;
	cout << "What is your destination? ([C]hicago, [M]iami, [P]ortland) ";
	cin >> destination;
	cout << "What time would you like to travel? (Enter a time between 0000-2359) ";
	cin >> time;
	cout << "Will you be traveling on a weekday or weekend? (Week[D]ay or Week[E]nd) ";
	cin >> day;

	//switch statement to get prices based on several conditions	
	switch (destination)
	{
	
	//Conditions for Miami prices	
		case 'M':
		
			if (day == 'D'&& time >= 500 && time <= 1900)
			{
				price = 150.00;
			}
			else if (day == 'D' && (time < 500 || time > 1900))	
			{
				price = 100.00;
			}
			else if (day == 'E' && time >= 500 && time <= 1900)	
			{
				price = 180.00;
			}
			else if (day == 'E' && (time < 500 || time > 1900))
			{
				price = 120.00;
			}	
			break;
	
	//Conditions for Chicago Prices
		case 'C':
		
			if (day == 'D' && time >= 500 && time <= 1900)
			{
				price = 75.00;
			}
			else if (day == 'D' && (time < 500 || time > 1900))
			{
				price = 50.00;
			}
			else if (day == 'E' && time >= 500 && time <= 1900)
			{
				price = 90.00;
			}
			else if (day == 'E' && (time < 500 || time > 1900))
			{
				price = 60.00;
			}
			break;

	//Conditions for Portland prices
		case 'P':
			if (day == 'D' && time >= 500 && time <= 1900)
			{
				price = 300.00;
			}
			else if (day == 'D' && (time < 500 || time > 1900))
			{
				price = 200.00;
			}
			else if (day == 'E' && time >= 500 && time <= 1900)
			{
				price = 360.00;
			}
			else if (day == 'E' && (time < 500 || time > 1900))
			{
				price = 240.00;
			}
			break;
	}
	
	//reports the price of each ticket
	cout << "Each ticket will cost: $" << price << ".00" << endl;
	
	//variables for order and receipt
	int tickets;
	const int minOrder = 0;
	float pay, change;
	
	//asks and gets ticket amount
	cout << "How many tickets would you like? ";
	cin >> tickets;
	
	//Computes order and outputs receipt
	if (tickets >= minOrder)
	{
		price *= tickets;
		cout << "You owe: $" << price << ".00" << endl;
		cout << "How much will you pay? $";
		cin >> pay;
		if (pay >= price)
		{
			change = pay - price;
			cout << "You will get $" << change << " in change.\n";
			cout << "Your tickets have been ordered!\n";
			cout << "Thank you for flying with fordhamAir!\n";
		}
		else
		{
			cout << "That is too little! No tickets ordered.\n";
		}
	}
	else 
	{
		cout << "Your order is invalid. Your order has been cancelled.\n";
	}
	
	return 0;
}
