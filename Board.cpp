#include"Board.h"

Board::Board()
{
	//call the creating board
	CreatBoard();
}
//this is creat chess board
void Board::CreatBoard()
{
	Color c = white;
		for(int i = 0 ; i < 8 ; ++i)
			for(int j = 0 ; j < 8 ; ++j)
			{
				if((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
					c = black;
				else
					c = white;
				board[i][j] = new Position(i + 1, j + 1 , c);
			}
}

//deleting the board
Board::~Board()
{
		for(int i = 0 ; i < 8 ; ++i)
			for(int j = 0 ; j < 8 ; ++j)
				delete board[i][j];
}

//returned board cell
Position* Board::GetBoardCell(int i, int j)
{
	if((i >= 0 && i < 8 ) || (j >= 0 && j < 8))
		return board[i][j];
	else 
		return board[0][0];
};

//if board is full return true else return false  
bool Board::BoardFull()
{
	for(int i = 0 ; i < 8 ; ++i )
	{
		for(int j = 0 ; j < 8 ; ++j)
		{
			if(board[i][j]->FreeOrNot())
				return false;
		}
	}

	return true;
}
