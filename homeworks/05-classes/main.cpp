#include <iostream>
#include <string>
#include <vector>
#include "TicTacToeBoard.h"


int main()
{
	TicTacToeBoard board;

	int choice{ 1 };

	do 
	{
		board.start_game("X");

		while (!board.game_over()) 
		{
			int position;
			std::cout << "Enter position(1-9): ";
			std::cin >> position;
			board.mark_board(position);
			board.display_board();
		}
	
		std::cout << "Enter 1 to play again, any other key to exit";
		std::cin >> choice;

	} while (choice == 1);

	return 0;
}

