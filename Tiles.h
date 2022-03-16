#pragma once
#include <iostream>

using namespace std;

class Tiles {
private:
	int coord[2];
public:
	virtual ~Tiles() = default;
	virtual void draw() = 0;
	virtual void use() = 0;
	void setCoord(int x, int y)
	{
		coord[0] = x;
		coord[1] = y;
	}
	void showCoord()
	{
		cout << "[" << coord[0] << "," << coord[1] << "]";
	}
};

class NormalTile : public Tiles {
public:
	void draw()
	{
		cout << "Nor";
	}
	void use() {};
};

class Bom : public Tiles {
public:
	void draw()
	{
		cout << "Bom";
	}
	void use()
	{
		cout << "Bomb "; showCoord(); cout << "is Explode";
	}
};

class Rocket : public Tiles {
public:
	void draw()
	{
		cout << "Roc";
	}
	void use()
	{
		cout << "Rocket "; showCoord(); cout << "is Explode";
	}
};

class Rubic : public Tiles {
public:
	void draw()
	{
		cout << "Rub";
	}
	void use()
	{
		cout << "Rubic "; showCoord(); cout << "is Activated";
	}
};