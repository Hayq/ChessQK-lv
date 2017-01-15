#include"Knight.h"
#include <stdlib.h>

Knight::Knight(int _col , int _row)
{
	position = new Position(2, 1,black);
	moves.push_back(position);

	position = new Position(1, 2,black);
	moves.push_back(position);

	position = new Position(-1, 2,black);
	moves.push_back(position);

	position = new Position(-2, 1, black);
	moves.push_back(position);

	position = new Position(-2, -1,black);
	moves.push_back(position);

	position = new Position(-1, -2,black);
	moves.push_back(position);

	position = new Position(1, -2,black);
	moves.push_back(position);

	position = new Position(2, -1,black);
	moves.push_back(position);

	position = board.GetBoardCell(_col , _row);
	position->ChangePositionSituation();

	position = new Position(_col, _row, black);
	_board[_col][_row] = 0;

}

void Knight::ProblemSolving()
{

    if(!IsTherClosedCell(*position, 1))
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "Ture exist" << endl;
        Show();
    }
}


bool Knight::CanMoveToCell(Position& next)
{
	int x = next.GetCol();
	int y = next.GetRow();
	//cout << "x= " << x << "  y= " << y << "  boar[" << x << "][" << y << "]=" << _board[x][y] << endl;

	if((x >= 0 && x < 8)
	&& (y >= 0 && y < 8)
	&&(_board[x][y] == 0) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Knight::IsTherClosedCell(Position pos, const int step)
{
		//if I do 64 steps tour will be completed
		if(step == 64)
		{
			return true;
		}

		//Knight try  walking to the possible 8 positions
		//standing in pos Position
		for (int i = 0; i < 8; ++i)
		{

			Position next(pos.GetCol() + moves[i]->GetCol(),
						  pos.GetRow() + moves[i]->GetRow(),
						  pos.GetColor());
			//push Column in x
			int x = next.GetCol();
			//Row in y
			int y = next.GetRow();

			//check if knight never stand in the next cell
			if(CanMoveToCell(next))
			{
				next.SetMoveCount(step);
				_board[next.GetCol()][next.GetRow()] = step;
				//board.GetBoardCell(x, y)->SetMoveCount(next.GetMoveCount());

				Move(next);
				//Show();
				//keep moving, if on next cell knight don't stand
				if(IsTherClosedCell(next, step + 1))
				{
					return true;
				}
				else
				{
					_board[x][y] = 0; // reset the cell
				}
			}

		}

		return false;
}

void Knight::Move(Position& pos)
{
	position = &pos;
	position->ChangePositionSituation();
}

void Knight::Show()
{
	std::cout << "    walking " << endl;

	for(int i = 0; i < 8 ; ++i)
	{
		for(int j = 0 ; j < 8 ; ++j)
		{
			cout<<_board[i][j] << "\t";
		}
		cout<< endl << endl;
	}
	cout << endl;
}

Knight :: ~Knight()
{
	for(int i = 0 ; i < moves.size() - 1; ++i)
	{
		position = moves[i];
		delete position;
	}
}
