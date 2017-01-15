#include"Position.h"

void Position::ChangePositionSituation()
{
	free = !free;
}
//if position free return true else return false
bool Position::FreeOrNot() const
{
	return free;
}

int Position::GetRow() const
{
	return rows;
}

int Position::GetCol() const
{
	return column;
}

Color Position::GetColor() const
{
	return color;
}

