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
	bool game_over();
	void start_game(const std::string first) { next_player = first; clear_board(); }
	void mark_board(const int position) { pegs[position - 1].val = next_player; set_next_player(); }
	std::string get_player() const;
	std::string get_winner() const;
	friend std::istream& operator >>(std::istream& in, TicTacToeBoard& board);
	friend std::ostream& operator <<(std::ostream& out, const TicTacToeBoard& board);

protected:
	virtual bool check_column_win() const =0;
	virtual bool check_row_win()const = 0;
	virtual bool check_diagonal_win()const = 0;
	virtual void display_board(std::ostream& o) const = 0;
	virtual void get_input(std::istream& in) = 0;

	void set_next_player();
	bool check_board_full() const;
	void clear_board();
	
	std::vector<Peg> pegs;
	std::string next_player;
	std::string winner;
};

#endif // !TIC_TAC_TOE_BOARD_H