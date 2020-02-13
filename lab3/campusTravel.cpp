#include<iostream>
using namespace std;

int main()
{
	//input and count variables
	int distance, transport, turns;
	distance = 14;
	turns = 4;

	//initiate loop for game
	while (distance > 0 && turns != 0)
	{	
		cout << "You are " << distance << " miles from campus!" << endl;
		cout << "How do you wish to travel? (1=bus, 2=subway, 3=jetpack): ";
		cin >> transport;
		
		//switch statement for travel options
		switch (transport)
		{
			case 1:				//If user chooses bus
				turns -= 1;
				distance -= 2;
				break;
			case 2:				//If user chooses subway
				turns -= 1;
				distance -= 5;
				break;
			case 3:				//If user chooses jetpack
				turns -= 1;
				distance -= 10;
				break;
			default:			//If user does not input 1,2, or 3
				cout << "Invalid choice!" << endl;
				break;
		}

	}
	
	//statements which output whether user loses due to out of turns or overshooting
	if (turns == 0 && distance > 0)
	{
		cout << "You are " << distance << " miles from campus!" << endl;
		cout << "You have no turns left!" << endl;
		cout << "You lose!" << endl;
	}
	else if (distance < 0)
	{
		distance *= -1;
		cout << "You are " << distance << " miles from campus!" << endl;
		cout << "You have overshot your target!" << endl;
		cout << "You lose!" << endl;
	}

	//output if user wins
	else if (distance == 0)
	{	
		cout << "You are " << distance << " miles from campus!" << endl;
		cout << "You have won!" << endl;
	}

	return 0;	//end code
					
}
