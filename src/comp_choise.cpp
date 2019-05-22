#include <iostream>
#include <ctime>
#include "comp_choise.h"

using namespace std;
const int MaxMatches = 100;
extern int Player, Matches, Move;
extern bool Correct;

void comp_choise() //Ход ИИ
{
	if (Matches <= 10)
	{
		Move = Matches;
	}
	else
	{
		Move = rand() % 10 + 1;
		if (Move > Matches)
			Move = Matches;
	}
	cout << "Мой ход, я беру " << Move; //Мой выпендреж перфекциониста:)
	if (Move == 1)
	{
		cout << " спичку.\n";
	}
	else
	{
		if (Move >= 2 && Move <= 4)
		{
			cout << " спички.\n";
		}
		else
		{
			cout << " спичек.\n";
		}
	}
}
