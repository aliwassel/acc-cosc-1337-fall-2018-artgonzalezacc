#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "TicTacToeBoard.h"


TEST_CASE("Test configuration", "config") {
	REQUIRE(120 == 120);
}

TEST_CASE("Test game over", "[game over]") 
{
	TicTacToeBoard board;
	
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test set first player X", "[first X player]") 
{
	TicTacToeBoard board;

	board.start_game("X");
	board.get_player() == "X";
}

TEST_CASE("Test set first player O", "[first O player]")
{
	TicTacToeBoard board;

	board.start_game("O");
	board.get_player() == "O";
}


TEST_CASE("Test win by first column", "[X wins first column]") 
{
	/*
	Tic Tac Toe Board
	123
	456
	789
	
	First column win are user position 1,4, and 7
	*/
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X
	board.mark_board(2);//O
	board.mark_board(4);//X
	board.mark_board(5);//O
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(2);
	board.mark_board(1);
	board.mark_board(5);
	board.mark_board(4);
	board.mark_board(8);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(3);
	board.mark_board(2);
	board.mark_board(6);
	board.mark_board(5);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);
	board.mark_board(4);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(3);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(4);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(1);
	board.mark_board(6);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(7);
	board.mark_board(4);
	board.mark_board(8);
	board.mark_board(6);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top left", "[X wins diagonally top left]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(4);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left", "[X wins diagonally bottom left]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(7);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(6);
	board.mark_board(3);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("No Winner board full", "[Board full]") 
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);
	board.mark_board(2);
	board.mark_board(3);
	board.mark_board(5);
	board.mark_board(4);
	board.mark_board(6);
	board.mark_board(8);
	board.mark_board(7);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}
