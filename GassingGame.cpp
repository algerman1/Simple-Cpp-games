// Gassing game 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num, guess, guessNum ,n;
	cout << "\tguessing game\n\n";
	srand(time(0));             // function to get random number
	num = 1 + rand() % 100;

	cout << "enter your guess between 1 and 100: ";
	guess = 0;
	
	for (guessNum = 0; guess != num; guessNum++)
		{
			std::cin >> guess;
			while (std::cin.fail())
			{
				std::cout << "Error,You entered False answer : "  ;
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cin >> guess;
			}
			if (guess < 0 || guess > 100) {
					std::cout << "Range is 0 to 100. Re-enter : ";
					
			}
			else if (guess < num)
					std::cout << "your guess is too low!. try again: ";
			if (guess > num)
					std::cout << "your guess is too high!. try again: ";
				
			
			
	}
		std::cout << "congratulations. you guessed it!!!. "
		<< "\nyou tried " << guessNum << " times to guess it\n";
	return 0;

}
