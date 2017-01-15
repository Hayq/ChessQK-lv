//heder file for position class

#ifndef Position_h
#define Position_h
#include"Enums.h"

class Position
{
private:
	Color color;
	int rows;
	int column;
	bool free; //figures situation
	int posCount;
public:
	Position(int  _col, int _row , Color col) : rows(_row) , column(_col) , color(col) ,
	free(true), posCount(1) {};

	//if position free chang is not free and if position not free change is free 
	void ChangePositionSituation();
	//returned cell is free or not 
	void SetMoveCount(int i) { posCount = i; }
	int GetMoveCount(){return posCount;}
	bool FreeOrNot() const;
	int GetRow() const ;
	int GetCol() const ;
	Color GetColor() const ;
};

#endif
