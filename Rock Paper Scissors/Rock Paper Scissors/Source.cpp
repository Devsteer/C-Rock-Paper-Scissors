#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>    
#include <conio.h>

std::string ai = "Computer";
std::string username;
int rounds;
int r = 1;
int scoreu = 0;
int scorea = 0;
int userchoice;

void gameover()
{
	SetConsoleTitleA("Rock Paper Scissors Conclusion");
	std::cout << "__________________________________" << std::endl;
	std::cout << '\t' << "Final Score" << std::endl;
	std::cout << "__________________________________" << std::endl;
	std::cout << " " << std::endl;
	std::cout << username << ": " << scoreu << std::endl;
	std::cout << ai << ": " << scorea << std::endl;
	std::cout << "__________________________________" << std::endl;
	std::cout << "Created by Devsteer#7468" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Press any key to continue..." << std::endl;
	_getch();
	


}

void draw()
{
	srand(time(0));

	std::cout << "__________________________________" << std::endl;
	std::cout << '\t' << "Rock Paper Scissors" << std::endl;
	std::cout << "__________________________________" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Round " << r << "/" << rounds << std::endl;
	std::cout << "__________________________________" << std::endl;
	std::cout << "Score " << std::endl;
	std::cout << username << ": " << scoreu << std::endl;
	std::cout << ai << ": " << scorea << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Enter your choice" << std::endl;
	std::cout << "1 = Rock\n2 = Paper\n3 = Scissors" << std::endl;
	std::cout << " " << std::endl;
	
	
	

}

void game()
{
	SetConsoleTitleA("Rock Paper Scissors");
	while (r <= rounds)
	{
		
		draw();
		std::cin >> userchoice;
		r++;

		srand(time(0));
		int aichoice = (rand() % 3) + 1;

		if (userchoice == 1, aichoice == 1)
		{
			scorea++;
			scoreu++;
			std::cout << "" << std::endl;
			std::cout << "you and the computer selected the same output, round is a tie" << std::endl;
		}
		else if (userchoice == 1, aichoice == 2)
		{
			scorea++;
			std::cout << "" << std::endl;
			std::cout << "computer chose paper you lost" << std::endl;

		}
		else if (userchoice == 1, aichoice == 3)
		{
			scoreu++;
			std::cout << "" << std::endl;
			std::cout << "computer selected scissors you won this round" << std::endl;

		}
		else if (userchoice == 2, aichoice == 1)
		{
			scoreu++;
			std::cout << "" << std::endl;
			std::cout << "computer selected rock you won the round" << std::endl;

		}
		else if (userchoice == 2, aichoice == 2)
		{
			scorea++;
			scoreu++;
			std::cout << "" << std::endl;
			std::cout << "you and the computer selected the same output, round is a tie" << std::endl;

		}
		else if (userchoice == 2, aichoice == 3)
		{
			scorea++;
			std::cout << "" << std::endl;
			std::cout << "computer choose scissors you lost this round" << std::endl;

		}
		else if (userchoice == 3, aichoice == 1)
		{
			scorea++;
			std::cout << "" << std::endl;
			std::cout << "computer selected rock you lost the round" << std::endl;

		}
		else if (userchoice == 3, aichoice == 2)
		{
			scoreu++;
			std::cout << "" << std::endl;
			std::cout << "computer selected paper you won the round" << std::endl;

		}
		else if (userchoice == 3, aichoice == 3)
		{
			scorea++;
			scoreu++;
			std::cout << "" << std::endl;
			std::cout << "you and the computer selected the same output, round is a tie" << std::endl;

		}
		Sleep(1250);
		system("cls");
	}
	std::cout << "Game ending..." << std::endl;
	Sleep(1000);
	system("cls");
	gameover();
}

void Loader()
{
	SetConsoleTitleA("Rock Paper Scissors Loader");
	std::cout << "Welcome to a console based rock paper scissors! " << std::endl;
	std::cout << "Enter a username: ";
	std::cin >> username;
	std::cout << "Your user name is " << username << std::endl;
	system("cls");
	std::cout << "Enter amount of rounds you want to play: ";
	std::cin >> rounds;
	system("cls");
	
	game();
}

int main()
{
	SetConsoleTitleA("Rock Paper Scissors");
	Loader();
	

	return 0;
}