// NUMBER GUESSING GAME

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	//seed the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	int numberGuess = rand() % 100 + 1;
	int userInput = 0;
	
	cout<<"welcome to the guess the number game!\n";
	do
	{
		cout<<"Guess the number between 1 and 100:";
		cin>> userInput;
		cout<<endl;
		if(userInput < numberGuess)
		{
			cout<< "The number is too low! Try again.\n";
		} 
		else if(userInput > numberGuess)
		{
			cout<<"The number is too high! Try again.\n";
		}
		else {
			cout<<"Yeah! You got the correct number"<<numberGuess<<"!\n";
		}
	}
	while (userInput != numberGuess);
	
	return 0;
}
