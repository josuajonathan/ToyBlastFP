#pragma once
#pragma once
#include "Tiles.h"

class ObjectFactory
{
public:
	Tiles* getTiles(string type)
	{
		if (type == "NORMAL")
		{
			return new NormalTile();
		}
		else if (type == "BOMB")
		{
			return new Bom();
		}
		else if (type == "DYNAMITE")
		{
			return new Rocket();
		}
		else if (type == "RUBICK")
		{
			return new Rubic();
		}
	}
};