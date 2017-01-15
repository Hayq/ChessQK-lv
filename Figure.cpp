#include"Figure.h"

Figure::Figure(Position& pos) : position(&pos)
{
	color = black;
};

Figure::Figure() : position(0)
{
	color = black;
};

Figure::~Figure() 
{//delete of figure position 
 	delete position;
}
