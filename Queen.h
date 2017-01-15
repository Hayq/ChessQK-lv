// Queen.h
#ifndef QUEEN_H_
#define QUEEN_H_

#include "Figure.h"


class Queen : public Figure
{
private:
	int count; // Problems  calculator
	int posvec[8];     //put positions in vector: index - row , value - column
public:
	Queen() { count = 1; }
	Queen(Position& pos) : Figure(pos)
	{ count = 1; }
	virtual void Move(Position&);
	virtual void ProblemSolving();
	virtual bool CanMoveToCell(Position&);
	virtual void Show();
	virtual ~Queen();
};

#endif /* QUEEN_H_ */
