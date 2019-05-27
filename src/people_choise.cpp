#include "head.h"
int people_choise(int Matches, int Move) //Ход игрока
{
      cout << "Ваш ход на столе " << Matches << " спичек. \n";
      cout << "Сколько спичек вы берете? \n";
      cin >> Move; //Проверка правильности введенного числа
      while (Move < 1 || Move > 10){
        cout << "Неправильное кол-во спичек, введите заново" << endl;
	cin >> Move;
      }
    return Move;
}
