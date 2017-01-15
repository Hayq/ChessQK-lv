//Main.cpp
#include <iostream>

#include "Queen.h"
#include "Knight.h"
using namespace std;

int main ()
{
	Figure* figure;

	int your_wanted_problem = 0;
	std::cout << "Press 0 for Knight, 1 for Queen: ";
	std::cin>>your_wanted_problem;

	if(your_wanted_problem == 1)
	{
		Position start_pos(0, 0, black);
		figure = new Queen(start_pos);
	}
	else if (your_wanted_problem == 0)
	{
		figure = new Knight (0, 0);
	}

	figure->ProblemSolving();
	delete figure;

	return 0;
}



