//
//Figure abstract class
#ifndef figure_h
#define figure_h

#include "Position.h"
#include "Enums.h"

class Figure
{
protected:
	// the color of figure (black or white) 
	Color color;
	//
	Position* position;
public:
	//figure defoult constructor
	Figure();
	//figure costructor give  position addres 
	Figure(Position&);
	//move figure on position in board cell
	virtual void Move(Position&) = 0 ;
	//if figure can move this position return true else  false
	virtual bool CanMoveToCell(Position&) = 0 ;
	//solve problem which selected
	virtual void ProblemSolving() = 0;
	//show result
	virtual void Show() = 0;
	//Destructor virutal
	virtual ~Figure();
};

#endif
