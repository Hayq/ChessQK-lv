#include "Figure.h"
#include "Board.h"
#include<vector>
class Knight : public Figure
{
private:
	Board board; //chess board
	vector<Position*> moves;//knight all posible moves
	int _board[8][8];
public:
	//Constructors
	Knight(int , int);
	//   end Constructors
	//this is function Move figure to gets position
	virtual void Move(Position&);
	//return true if our knight can move this is position
	virtual bool CanMoveToCell(Position&);
	//this function get is moves sequence
	virtual void ProblemSolving();
	//if there is inaccessible cell return true else return false
	bool IsTherClosedCell(Position, const int);
	//now i show knight moves
	virtual void Show();
	//destructor
	virtual ~Knight();
};
