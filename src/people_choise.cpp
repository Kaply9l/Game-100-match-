#include "people_choise.h"
#include <ctime>
#include <iostream>

using namespace std;
const int MaxMatches = 100;
extern int Player, Matches, Move;
extern bool Correct;

int people_choise() //Ход игрока
{
  do {
    cout << "Ваш ход на столе " << Matches << " спичек. \n";
    cout << "Сколько спичек вы берете? \n";
    cin >> Move;
    Correct = true;

    if (Move >= 1 && Move <= 10 &&
        Move <= Matches) //Проверка правильности введенного числа
    {
      return Correct;
    } else {
      cout << "Неверно, вы можете взять от одной до десяти спичек и не больше "
              "чем осталось на столе. Повторите ввод. \n";

      Correct = false;
    }
  } while (!Correct);
}
