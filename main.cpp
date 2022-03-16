#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char option = 'y';

	board.printBoard();

	while (option != 'n')
	{
		cout << endl << "Input Angka Koordinat";
		cout << endl << "[Sumbu-X] : "; cin >> x;
		cout << "[Sumbu-Y] : "; cin >> y;
		board.use(x, y);
		cout << endl;
		board.printBoard();
		cout << endl;
		cout << "Main Lagi ?"; cin >> option;
	}
}