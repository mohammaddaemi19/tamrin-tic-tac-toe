#include <iostream>
#include <chrono>
#include <cstdlib>
#include <Windows.h>
using namespace std;
void game_board();
void chek_winner();
void mosavi();

char game[3][3] = { {'_','_','_'},
					  {'_','_','_'},
					  {'_','_','_'} };

void chek_winner()
{
	int g;
	if (game[0][0] == 'x' && game[0][1] == 'x' && game[0][2] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[1][0] == 'x' && game[1][1] == 'x' && game[1][2] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[2][0] == 'x' && game[2][1] == 'x' && game[2][2] == 'x')
	{

		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][0] == 'x' && game[1][0] == 'x' && game[2][0] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][1] == 'x' && game[1][1] == 'x' && game[2][1] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][2] == 'x' && game[1][2] == 'x' && game[2][2] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][0] == 'x' && game[1][1] == 'x' && game[2][2] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][2] == 'x' && game[1][1] == 'x' && game[2][0] == 'x')
	{
		cout << "player 1 winner";
		g = 1;
		system("pause");
	}
	if (game[0][0] == 'o' && game[0][1] == 'o' && game[0][2] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[1][0] == 'o' && game[1][1] == 'o' && game[1][2] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[2][0] == 'o' && game[2][1] == 'o' && game[2][2] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][0] == 'o' && game[1][0] == 'o' && game[2][0] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][1] == 'o' && game[1][1] == 'o' && game[2][1] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][2] == 'o' && game[1][2] == 'o' && game[2][2] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][0] == 'o' && game[1][1] == 'o' && game[2][2] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	else if (game[0][2] == 'o' && game[1][1] == 'o' && game[2][0] == 'o')
	{
		cout << "player 2 winner";
		g = 1;
		system("pause");
	}
	
}
void mosavi()
{
	int b = 0, s = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (game[i][j] == 'x'||game[i][j]=='o')
		    b++;
		}
	}
	if (b == 9)
	{
		cout << "mosavi";
	}
}
int main()
{
	
	game_board();
	auto start = chrono::steady_clock::now();
	while (true)
	{
		cout << "player1:";
		cout << endl;
		int row, colmun;
		while (true)
		{
			cout << "enter the row:";
			cin >> row;
			cout << "enter the colmun:";
			cin >> colmun;
			if (0 <= row && row <= 2 && 0 <= colmun && row <= 2)
			{
				
				if (game[row][colmun] == '_')
				{	
					game[row][colmun] = 'x';
					break;
				}
			}
			else
				cout << "out of range";
		}
		game_board();
		chek_winner();
		mosavi();
		cout << "player2:";
		cout << endl;
		while (true) 
		{
			cout << "enter the row:";
			cin >> row;
			cout << "enter the colmun:";
			cin >> colmun;
			if (0 <= row && row <= 2 && 0 <= colmun && row <= 2)
			{
				if (game[row][colmun] == '_')
				{
					game[row][colmun] = 'o';
					break;
				}
			}
			else
				cout << "out of range";
		}
		chek_winner();
		mosavi();
		game_board();
		auto end = chrono::steady_clock::now();
		auto diff = end - start;
		cout << chrono::duration<double>(diff).count() << "s"<<endl;
	}
}
void game_board()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (game[i][j] == 'x')
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			else if (game[i][j] == 'o')
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			cout << game[i][j] << ' ';
		}
		cout << endl;
	}
}

