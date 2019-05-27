#include "head.h"

int people_choise(int Matches, int move, bool Correct) //Ход игрока
{
  do {
    cout << "Ваш ход на столе " << Matches << " спичек. \n";
    cout << "Сколько спичек вы берете? \n";
    cin >> Move;
    Correct = true;

    if (Move >= 1 && Move <= 10 && Move <= Matches) //Проверка правильности введенного числа
    {
      return move;
    }else 
	{
      		cout << "Неверно, вы можете взять от одной до десяти спичек и не больше "
              "чем осталось на столе. Повторите ввод. \n";
      		Correct = false;
    	}
  } while (!Correct);
}
