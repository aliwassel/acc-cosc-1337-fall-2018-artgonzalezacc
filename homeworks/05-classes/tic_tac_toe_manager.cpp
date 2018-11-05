#include "tic_tac_toe_manager.h"

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	return out;
}

std::unique_ptr<TicTacToeBoard> TicTacToeManager::get_game(GameType game_type)
{
	return std::unique_ptr<TicTacToe3>();
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToeBoard> board)
{
}

void TicTacToeManager::update_winner_count(std::string& winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		c_win++;
	}


}
