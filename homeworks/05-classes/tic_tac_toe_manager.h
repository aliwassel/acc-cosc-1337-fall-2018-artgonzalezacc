#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<memory>
#include<string>

#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

enum GameType 
{
	tic_tac_toe_3,
	tic_tac_toe_4
};

class TicTacToeManager 
{
public:
	std::unique_ptr<TicTacToeBoard> get_game(GameType game_type);
	void save_game(std::unique_ptr<TicTacToeBoard> board);
	friend std::ostream& operator <<(std::ostream& out, const TicTacToeManager& manager);
private:
	void update_winner_count(std::string& winner);
	std::vector<std::unique_ptr<TicTacToeBoard>> boards;
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
};


#endif // !TIC_TAC_TOE_MANAGER_H