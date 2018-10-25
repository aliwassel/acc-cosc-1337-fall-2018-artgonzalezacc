#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include <vector>
#include <iostream>
#include <string>


class TicTacToeBoard 
{
public:
	TicTacToeBoard() = default;
	const bool game_over();
	void start_game(const std::string first) { next_player = first; clear_board(); }
	void mark_board(const int position) { pegs[position-1] = next_player; set_next_mark(); }
	const std::string get_player();
	void display_board();
private:
	void set_next_mark();
	const bool check_column_win();
	const bool check_row_win();
	const bool check_diagonal_win();
	bool check_board_full() const;
	void clear_board();
	std::vector<std::string> pegs{ 9, " " };
	std::string next_player;
};

#endif // !TIC_TAC_TOE_BOARD_H