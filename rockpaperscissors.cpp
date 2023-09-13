#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getComputerChoice(int);
int getPlayerChoice();
void determineWinner(int, int);

int main()
{
	int userChoice;
	int computerChoice;
	
	userChoice = getPlayerChoice();
	computerChoice = getComputerChoice(userChoice);
	determineWinner(userChoice, computerChoice);

	return 0;
}
//****************************************************************
int getPlayerChoice()
{
	int userChoice; 

	cout << "Choose one of the options to go against the computer: " << endl;
	cout << "1. Rock " << endl;
	cout << "2. Paper " << endl;
	cout << "3. Scissors " << endl;
	cout << "4. Quit " << endl;
	cin >> userChoice;

	while (userChoice < 1 || userChoice > 4)
	{
		cout << "Invalid. Choice must be 1, 2, 3 or 4. Try again. " << endl;
		cin >> userChoice;
	}
	if (userChoice == 1)
	{
		cout << "You chose: Rock " << endl;
	}
	else if (userChoice == 2)
	{
		cout << "You chose: Paper " << endl;
	}
	else if (userChoice == 3)
	{
		cout << "You chose: Scissors " << endl;
	}
	else
	{
		cout << "Ending game. " << endl;
		exit(0);
	}

	return userChoice;
}
//****************************************************************
int getComputerChoice(int userChoice)
{
	srand((unsigned int)time(NULL));
	int computerChoice = rand() % 3 + 1;

	if (computerChoice == 1)
	{
		cout << "The computer chose: Rock " << endl;
	}
	if (computerChoice == 2)
	{
		cout << "The computer chose: Paper " << endl;
	}
	if (computerChoice == 3)
	{
		cout << "The computer chose: Scissors " << endl;
	}
	if (computerChoice == 4)
	{
		
	}
	return computerChoice;
}
//****************************************************************
void determineWinner(int userChoice, int computerChoice)
{
	if (userChoice == 1)
	{
		if (computerChoice == 2)
		{
			cout << "You lose... Paper wraps rock. " << endl;
		}
		else if (computerChoice == 3)
		{
			cout << "You win! Rock smashes scissors. " << endl;
		}
		else
		{
			cout << "No winner. Tie. " << endl;
		}
	}
	else if (userChoice == 2)
	{
		if (computerChoice == 1)
		{
			cout << "You win! Paper wraps rock. " << endl;
		}
		else if (computerChoice == 3)
		{
			cout << "You lose... Scissors cuts paper. " << endl;
		}
		else
		{
			cout << "No winner. Tie game. " << endl;
		}
	}
	else if (userChoice == 3)
	{
		if (computerChoice == 1)
		{
			cout << "You lose... Rock smashes scissors. " << endl;
		}
		else if (computerChoice == 2)
		{
			cout << "You win! Scissors cuts paper. " << endl;
		}
		else
		{
			cout << "No winner. Tie game. " << endl;
		}
	}
}
/*

Choose one of the options to go against the computer :
1. Rock
2. Paper
3. Scissors
4. Quit
1
You chose : Rock
The computer chose : Scissors
You win!Rock smashes scissors.

C : \Users\Inel Muratovic\source\repos\Assignment 19\Debug\Assignment 19.exe(process 4308) exited with code 0.
Press any key to close this window . . .

*/
/*

Choose one of the options to go against the computer:
1. Rock
2. Paper
3. Scissors
4. Quit
2
You chose: Paper
The computer chose: Rock
You win! Paper wraps rock.

C:\Users\Inel Muratovic\source\repos\Assignment 19\Debug\Assignment 19.exe (process 9084) exited with code 0.
Press any key to close this window . . .

*/
/*

Choose one of the options to go against the computer:
1. Rock
2. Paper
3. Scissors
4. Quit
0
Invalid. Choice must be 1, 2, 3 or 4. Try again.
3
You chose: Scissors
The computer chose: Scissors
No winner. Tie game.

C:\Users\Inel Muratovic\source\repos\Assignment 19\Debug\Assignment 19.exe (process 14288) exited with code 0.
Press any key to close this window . . .

*/
/*

Choose one of the options to go against the computer:
1. Rock
2. Paper
3. Scissors
4. Quit
4
Ending game.

C:\Users\Inel Muratovic\source\repos\Assignment 19\Debug\Assignment 19.exe (process 7264) exited with code 0.
Press any key to close this window . . .

*/