#pragma once
#include "ObjectFactory.h"
#define pjgx 8
#define pjgy 8

class Board
{
private:
	Tiles* array[pjgx][pjgy];
	ObjectFactory objectfactory;
public:
	Board()
	{
		for (int i = 0; i < pjgx; i++)
		{
			for (int j = 0; j < pjgy; j++)
			{
				if ((j + 1 + i) % 2 == 0)
				{
					array[i][j] = objectfactory.getTiles("BOMB");
				}
				else {
					array[i][j] = objectfactory.getTiles("DYNAMITE");
				}
			}
		}
	}
	void printBoard()
	{
		for (int i = 0; i < pjgx; i++)
		{
			cout << "| ";
			for (int j = 0; j < pjgy; j++)
			{
				if (array[i][j] != NULL)
					array[i][j]->draw();
				cout << " | ";
			}
			cout << endl;
		}
	}
	void use(int x, int y)
	{
		array[x][y]->use();
		array[x][y] = NULL;
	}
};