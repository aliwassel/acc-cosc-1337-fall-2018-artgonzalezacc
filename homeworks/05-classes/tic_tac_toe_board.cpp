#include "tic_tac_toe_board.h"

const bool TicTacToeBoard::game_over()
{
	bool over = check_column_win() || check_row_win() || check_diagonal_win() || check_board_full();
	if (over)
	{
		if (check_board_full())
		{
			c_win++;
		}
		else if (next_player == "X")
		{
			o_win++;
		}
		else
		{
			x_win++;
		}
	}

	return over;
}

void TicTacToeBoard::set_next_mark()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}

const bool TicTacToeBoard::check_column_win()
{
	for (int i = 0; i < 3; ++i)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6] &&
			pegs[i + 6] != " ")
			return true;
	}

	return false;
}

const bool TicTacToeBoard::check_row_win()
{
	for (int i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2] &&
			pegs[i + 2] != " ")
			return true;
	}

	return false;
}

const bool TicTacToeBoard::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
		return true;
	else if (pegs[6] == pegs[4] && pegs[4] == pegs[2] && pegs[6] != " ")
		return true;

	return false;
}

const std::string TicTacToeBoard::get_player()
{
	return next_player;
}

void TicTacToeBoard::display_board()
{
	for (unsigned i = 0; i < pegs.size(); i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << std::endl;
	}
	std::cout << x_win << o_win << c_win << std::endl;

}

TicTacToeBoard TicTacToeBoard::operator+=(const TicTacToeBoard & b)
{
	x_win += b.x_win;
	o_win += b.o_win;
	c_win += b.c_win;

	return TicTacToeBoard(x_win, o_win, c_win);
}

bool TicTacToeBoard::check_board_full() const
{

	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}

	return true;
}

void TicTacToeBoard::clear_board()
{
	for (auto& peg : pegs)
		peg = " ";
}

std::istream & operator>>(std::istream & in, TicTacToeBoard & board)
{
	int position;
	std::cout << "Enter position (1-9): ";
	in >> position;
	board.mark_board(position);

	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & board)
{
	for (unsigned i = 0; i < board.pegs.size(); i += 3)
	{
		out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2] << std::endl;
	}
	out << board.x_win << board.o_win << board.c_win << std::endl;

	return out;
}
