#include "head-test.h"
int comp_choise(int Move, int Matches) //Ход ИИ
{
	if (Matches <= 10)
	{
		Move = Matches;
	}else
	    {
		      //Move = rand() % 10 + 1;
          if (Move > Matches)
		       {
			          Move = Matches;
			          return Move;
	 	       }
	    }
	return Move;
}

TEST_CASE("comp-chise", "[TESTING]")
{
  int Move = 0;
  int Matches = 1;
  REQUIRE(comp_choise(Move, Matches) == 1);
  Matches = 2;
  REQUIRE(comp_choise(Move, Matches) == 2);
  Matches = 3;
  REQUIRE(comp_choise(Move, Matches) == 3);
  Matches = 4;
  REQUIRE(comp_choise(Move, Matches) == 4);
  Matches = 5;
  REQUIRE(comp_choise(Move, Matches) == 5);
  Matches = 6;
  REQUIRE(comp_choise(Move, Matches) == 6);
  Matches = 7;
  REQUIRE(comp_choise(Move, Matches) == 7);
  Matches = 8;
  REQUIRE(comp_choise(Move, Matches) == 8);
  Matches = 9;
  REQUIRE(comp_choise(Move, Matches) == 9);
  Matches = 10;
  REQUIRE(comp_choise(Move, Matches) == 10);
  printf("test comp.cpp complete\n");
}
