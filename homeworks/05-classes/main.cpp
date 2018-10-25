#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe_board.h"


int main()
{
	TicTacToeBoard a, b, c;

	b.start_game("X");
	std::cin >> b;//enter 1
	b.mark_board(2);//O
	b.mark_board(4);//X
	b.mark_board(5);//O
	b.mark_board(7);//X
	b.game_over();

	a.start_game("O");
	a.mark_board(2);
	a.mark_board(1);
	a.mark_board(5);
	a.mark_board(4);
	a.mark_board(8);
	a.game_over();

	c.start_game("X");
	c.mark_board(1);
	c.mark_board(2);
	c.mark_board(3);
	c.mark_board(5);
	c.mark_board(4);
	c.mark_board(6);
	c.mark_board(8);
	c.mark_board(7);
	c.mark_board(9);
	c.game_over();

	std::vector<TicTacToeBoard> boards{ a, b, c };
	std::cout << a;
	std::cout << b;
	std::cout << c;

	TicTacToeBoard t;
	for (auto b : boards)
	{
		t += b;
	}

	std::cout << t;

	return 0;
}

