#include "head.h"

int comp_choise(int Move, int Matches) //Ход ИИ
{
  Move = Matches;

  if (Matches <= 10) {
    Move = Matches;
  } else {
    Move = rand() % 10 + 1;
    if (Move > Matches) {
      Move = Matches;
      return Move;
    }

    cout << "Мой ход, я беру " << Move; //Мой выпендреж перфекциониста:)
    if (Move == 1) {
      cout << " спичку.\n";
    }
    if (Move >= 2 && Move <= 4) {
      cout << " спички.\n";
    }
    if (Move >= 5 && Move <= 10) {
      cout << " спичек.\n";
    }
  }
  return Move;
}
