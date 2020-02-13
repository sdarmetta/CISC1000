#include<iostream>
using namespace std;

//declaring operation functions and input error function to determine validity
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int runSum(int num1, int num2);
char inputError(int num1, char operand, int num2);

int main()
{
	//declaring input variables for functions
	int firstNum, secondNum, output;
	char operation, validity;

	//asks user for the first equation
	cout << "Enter an equation or 0 x 0 to exit: ";
	cin >> firstNum >> operation >> secondNum;

	//begin loop if user does not input 0 x 0
	while(!(firstNum == 0 && operation == 'x' && secondNum == 0))
	{

		if(inputError(firstNum, operation, secondNum))		//if statement calling inputError function to determine validity
		{
			validity = inputError(firstNum, operation, secondNum);	
		}
	
		switch (validity)					//switch statement uses validity variable returned by inputError function
		{
			case 'V':					//all valid operations
				if (operation == '+')
				{
					output = add(firstNum, secondNum);
					cout << firstNum << " + " << secondNum << " = " << output << endl;
				}
				else if(operation == '-')
				{
				
					output = subtract(firstNum, secondNum);
					cout << firstNum << " - " << secondNum << " = " << output << endl;
				}
				else if(operation == 'x')
				{
				
					output = multiply(firstNum, secondNum);
					cout << firstNum << " x " << secondNum << " = " << output << endl;
				}
				else if(operation == '/')
				{
					output = divide(firstNum, secondNum);
					cout << firstNum << " / " << secondNum << " = " << output << endl;
				}
				else if(operation == 'R')
				{
					output = runSum(firstNum, secondNum);
					cout << firstNum << " R " << secondNum << " = " << output << endl;
				}
				break;
			case 'Z':					//invalid operation for dividing by zero	
				cout << "Error -- cannot divide by 0.\n";
				break;
			case 'B':					//invalid operation for a bigger second number in a run sum
				cout << "Error -- " << firstNum << " > " << secondNum << " in " << firstNum << " R " << secondNum << "." << endl;
				break;
		}

		cout << "Enter an equation or 0 x 0 to exit: ";		
		cin >> firstNum >> operation >> secondNum;	
	}

	cout << "Thanks for using the calculator. Goodbye!\n";		//salutation after user exits 	
}

	//inputError function definition, determines valid or invalid operations
char inputError(int num1, char operand, int num2)
{
	char type;
	if(operand == '/' && num2 == 0)
	{
		type = 'Z';
	}
	else if(operand == 'R' && num1 > num2)
	{
		type = 'B';
	}
	else
	{
		type = 'V';
	}

	return type;
}

//function to add two integers
int add(int num1, int num2)
{
	int sum;

	sum = num1 + num2;

	return sum;	
}

//function to subtract two integers
int subtract(int num1, int num2)
{
	int difference;
	
	difference = num1 - num2;	
	
	return difference;
}

//function to multiply two integers
int multiply(int num1, int num2)
{
	int product;

	product = num1 * num2;

	return product;
}

//function to divide two integers
int divide(int num1, int num2)
{
	int quotient;

	quotient = num1 / num2;

	return quotient;
} 

//function to find running sum
int runSum(int num1, int num2)
{
	int endSum;
	int counter;

	counter = num1 + 1;

	while(counter <= num2)
	{
		num1 += counter;
		counter ++;
	}

	endSum = num1;

	return endSum;
}
