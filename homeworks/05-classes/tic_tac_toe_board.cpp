#include "tic_tac_toe_board.h"

bool TicTacToeBoard::game_over()
{
	bool over = check_column_win() || check_row_win() || check_diagonal_win() || check_board_full();
	if (over)
	{
		if (check_board_full())
		{
			winner = "C";
		}
		else if (next_player == "X")
		{
			winner = "O";
		}
		else
		{
			winner = "X";
		}
	}

	return over;
}

void TicTacToeBoard::set_next_player()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}

std::string TicTacToeBoard::get_player() const
{
	return next_player;
}

std::string TicTacToeBoard::get_winner() const
{
	return winner;
}

bool TicTacToeBoard::check_board_full() const
{

	for (auto peg : pegs)
	{
		if (peg.val == " ")
		{
			return false;
		}
	}

	return true;
}

void TicTacToeBoard::clear_board()
{
	for (auto& peg : pegs)
		peg.val = " ";
}

std::istream & operator>>(std::istream & in, TicTacToeBoard & board)
{
	board.get_input(in);
	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & board)
{
	board.display_board(out);
	return out;
}
