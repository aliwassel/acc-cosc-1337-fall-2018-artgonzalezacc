#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include <vector>
#include <iostream>
#include <string>
#include "peg.h"

class TicTacToeBoard
{
public:
	TicTacToeBoard() = default;
	TicTacToeBoard(int x, int o, int c) : x_win(x), o_win(o), c_win(o) {}
	const bool game_over();
	void start_game(const std::string first) { next_player = first; clear_board(); }
	void mark_board(const int position) { pegs[position - 1].val = next_player; set_next_mark(); }
	const std::string get_player();
	void display_board();
	TicTacToeBoard operator+=(const TicTacToeBoard& b);
	friend std::istream& operator >>(std::istream& in, TicTacToeBoard& board);
	friend std::ostream& operator <<(std::ostream& out, const TicTacToeBoard& board);
private:
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
	void set_next_mark();
	const bool check_column_win();
	const bool check_row_win();
	const bool check_diagonal_win();
	bool check_board_full() const;
	void clear_board();
	std::vector<Peg> pegs{ 9 };
	std::string next_player;
};

#endif // !TIC_TAC_TOE_BOARD_H