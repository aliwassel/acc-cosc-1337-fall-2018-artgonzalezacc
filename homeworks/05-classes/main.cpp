#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

int main()
{
	int choice{ 1 };

	do
	{
		int game;
		std::cout << "What game 3 or 4: ";
		std::cin >> game;

		std::unique_ptr<TicTacToeBoard> board;

		if (game == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
		}

		std::string player;
		std::cout << "Enter first player X or O: ";
		std::cin >> player;

		board->start_game(player);

		while (!board->game_over())
		{
			std::cin >> *board;
			std::cout << *board;
		}

		std::cout << "Enter 1 to play again, any other key to exit";
		std::cin >> choice;

	} while (choice == 1);
	return 0;
}

