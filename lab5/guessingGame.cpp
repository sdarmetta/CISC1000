#include <iostream>
#include<cstdlib>
using namespace std;

void rollAndFlip(int& dieRoll, int& coinFlip);		//function declaration for dice roll and coin flip operation; pre-conditions: both dice and coin are integers.
void userGuess(int& guessRoll, char& guessFlip);	/*function declaration for user guess dice roll and coin flip; pre-conditions: users roll guess is an integer, coin flip 								guess is a character ('H' or 'T')*/
void userContinue(char& continueGame);			//function declaration for user input continue game or not; pre-condition: user input is a character (Y/N)

int main()
{
	//variable score declaration, beginning at zero for the start of the game. 
	int score = 0;

	//variable declarations for all function calls (rollAndFlip, userGuess, and userContinue).
	char playGame = 'Y', guessCoin, coinResult;
	int dice, coin;
	int guessDice;

	//Begin game loop.
	while(playGame != 'N')
	{
		rollAndFlip(dice, coin);		//function call, rolls dice and flips coin.
		userGuess(guessDice, guessCoin);	//function call, user inputs guesses on die roll and coin flip.
		
		//coinResult variable sets function variable coin = 1 is equal to Heads, and 2 is equal to Tails.
		if(coin == 1)
		{
			coinResult = 'H';
		}
		else if(coin == 2)  
		{
			coinResult = 'T';
		}

		//if statement if user guess is correct or incorrect, adds 10 if correct, subtracts 1 if incorrect
		if(guessDice == dice && guessCoin == coinResult)
		{
			cout << "Correct! Die roll was " << dice << ", coin flip was " << coinResult << ".\n";
			score += 10;
		}
		else
		{
			cout << "Incorrect! Die roll was " << dice << ", coin flip was " << coinResult << ".\n";
			score -= 1;
		}
		cout << "Total points: " << score << endl << endl;		//outputs and updates total score
		userContinue(playGame);					//asks if user wishes to continue playing
	}
	
	cout << endl;
	cout << "Goodbye. Thanks for playing!\n";			//salutation if user quits game.

	return 0;
}

/*function definition for rolling the die and flipping the coin. 
 * post-condition: outputs a random number between 1 and 6(die) and 1 and 2(coin).*/ 
void rollAndFlip(int& dieRoll, int& coinFlip)
{
	srand(time(0));
	dieRoll = (rand() % 6) + 1;
	coinFlip = (rand() % 2) + 1;
}

/*function definition for user guess input.
 * post-condition: asks for the guess of one die roll and one coin toss.*/
void userGuess(int& guessRoll, char& guessFlip)
{
	cout << "Guess a (6-sided) die roll and a coin flip('H' or 'T'): ";
	cin >> guessRoll >> guessFlip;
}

/*function definition to continue game. 
 * post-condition: asks user if he/she wants to continue playing, 'Y' for yes, 'N' for no.*/
void userContinue(char& continueGame)
{
	cout << "Do you want to try again? (Y/N) ";
	cin >> continueGame;
}







				 
