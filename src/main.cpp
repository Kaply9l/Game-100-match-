#include "head.h"

int main() {
  const int MaxMatches = 100;
  int Player, Matches, Move;
  bool Correct;

  srand(time(0));
  Matches = MaxMatches;
  setlocale(LC_ALL, "Russian");
  Player = rand() % 2 + 1; //Рандом (кто первый ходит ИИ или человек)
  do //Тело функции, которая отвечает за ход
  {
    if (Player == 1) {
      move = people_choise(Matches, Move, Correct);
      cout << " \n";
      Player = 2;
    } else {
      Move = comp_choise(Move, Matches);
      cout << " \n";
      Player = 1;
    }
    Matches -= Move;

  } while (Matches != 0);
  if (Player == 2) //Алгоритм, определяющий кто победил
  {
    cout << "Поздравляю, вы победили!\n";
  } else {
    cout << "Вы проиграли.\n";
  }
  return 0;
}
