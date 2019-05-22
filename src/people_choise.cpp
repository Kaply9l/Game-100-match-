#include <iostream>
#include <ctime>
#include "people_choise.h"

using namespace std;
const int MaxMatches = 100;
extern int Player, Matches, Move;
extern bool Correct;

void people_choise() //Ход игрока
{
	do
	{
		cout << "Ваш ход на столе " << Matches << " спичек. \n";
		cout << "Сколько спичек вы берете? \n";
		cin >> Move;

		if (Move >= 1 && Move <= 10) //Проверка правильности введенного числа
		{
			Correct = true;
		}
		else
		{
			cout << "Неверно, вы можете взять от одной до десяти спичек. Повторите ввод";
			Correct = false;

		}
	} while (!Correct);
}
