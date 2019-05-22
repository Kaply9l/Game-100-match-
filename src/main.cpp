#include "comp_choise.h"
#include "people_choise.h"
#include <ctime>
#include <iostream>

using namespace std;
const int MaxMatches = 100;
int Player, Matches, Move;
bool Correct;

int main() {
  srand(time(0));
  Matches = MaxMatches;
  setlocale(LC_ALL, "Russian");
  Player = rand() % 2 + 1; //Рандом (кто первый ходит ИИ или человек)
  do //Тело функции, которая отвечает за ход
  {
    if (Player == 1) {
      people_choise();
      cout << " \n";
      Player = 2;
    } else {
      comp_choise();
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
