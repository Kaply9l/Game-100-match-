#include "head-test.h"

int people_choise(int Move) //Ход игрока
{
      while(1)
      {
        if (Move >= 1 && Move <= 10)
          break;
        return 0;
      }
  return Move;
}
TEST_CASE("people-choise-test", "[TEST]"){
  REQUIRE(people_choise(1) == 1);
  REQUIRE(people_choise(2) == 2);
  REQUIRE(people_choise(3) == 3);
  REQUIRE(people_choise(4) == 4);
  REQUIRE(people_choise(5) == 5);
  REQUIRE(people_choise(6) == 6);
  REQUIRE(people_choise(7) == 7);
  REQUIRE(people_choise(8) == 8);
  REQUIRE(people_choise(9) == 9);
  REQUIRE(people_choise(10) == 10);
  REQUIRE(people_choise(0) == 0);
  REQUIRE(people_choise(-4) == 0);
  REQUIRE(people_choise(12) == 0);
  REQUIRE(people_choise(13) == 0);
  REQUIRE(people_choise(14) == 0);
  REQUIRE(people_choise(15) == 0);
  REQUIRE(people_choise(16) == 0);
  REQUIRE(people_choise(17) == 0);
  REQUIRE(people_choise(18) == 0);
  REQUIRE(people_choise(19) == 0);
  REQUIRE(people_choise(20) == 0);
  REQUIRE(people_choise(21) == 0);
  REQUIRE(people_choise(22) == 0);
  REQUIRE(people_choise(23) == 0);
  REQUIRE(people_choise(24) == 0);
  REQUIRE(people_choise(25) == 0);
  REQUIRE(people_choise(26) == 0);
  REQUIRE(people_choise(27) == 0);
  REQUIRE(people_choise(28) == 0);
  REQUIRE(people_choise(29) == 0);
  REQUIRE(people_choise(30) == 0);
  REQUIRE(people_choise(31) == 0);
  REQUIRE(people_choise(32) == 0);
  REQUIRE(people_choise(33) == 0);
  REQUIRE(people_choise(34) == 0);
  REQUIRE(people_choise(35) == 0);
  REQUIRE(people_choise(36) == 0);
  REQUIRE(people_choise(37) == 0);
  REQUIRE(people_choise(38) == 0);
  REQUIRE(people_choise(39) == 0);
  REQUIRE(people_choise(40) == 0);
  REQUIRE(people_choise(41) == 0);
  REQUIRE(people_choise(42) == 0);
  REQUIRE(people_choise(43) == 0);
  REQUIRE(people_choise(44) == 0);
  REQUIRE(people_choise(45) == 0);
  REQUIRE(people_choise(46) == 0);
  REQUIRE(people_choise(47) == 0);
  REQUIRE(people_choise(48) == 0);
  REQUIRE(people_choise(49) == 0);
  REQUIRE(people_choise(50) == 0);
  REQUIRE(people_choise(-1) == 0);
  REQUIRE(people_choise(-2) == 0);
  REQUIRE(people_choise(-3) == 0);
  REQUIRE(people_choise(-4) == 0);
  REQUIRE(people_choise(-5) == 0);
  REQUIRE(people_choise(-6) == 0);
  REQUIRE(people_choise(-7) == 0);
  REQUIRE(people_choise(-8) == 0);
  REQUIRE(people_choise(-9) == 0);
  REQUIRE(people_choise(-10) == 0);
  REQUIRE(people_choise(-11) == 0);
  REQUIRE(people_choise(-12) == 0);
  REQUIRE(people_choise(-13) == 0);
  REQUIRE(people_choise(-14) == 0);
  REQUIRE(people_choise(-15) == 0);
  REQUIRE(people_choise(-16) == 0);
  REQUIRE(people_choise(-17) == 0);
  REQUIRE(people_choise(-18) == 0);
  REQUIRE(people_choise(-19) == 0);
  REQUIRE(people_choise(-20) == 0);
  REQUIRE(people_choise(-21) == 0);
  REQUIRE(people_choise(-22) == 0);
  REQUIRE(people_choise(-23) == 0);
  REQUIRE(people_choise(-24) == 0);
  REQUIRE(people_choise(-25) == 0);
  REQUIRE(people_choise(-26) == 0);
  REQUIRE(people_choise(-27) == 0);
  REQUIRE(people_choise(-28) == 0);
  REQUIRE(people_choise(-29) == 0);
  REQUIRE(people_choise(-30) == 0);
  REQUIRE(people_choise(-31) == 0);
  REQUIRE(people_choise(-32) == 0);
  REQUIRE(people_choise(-33) == 0);
  REQUIRE(people_choise(-34) == 0);
  REQUIRE(people_choise(-35) == 0);
  REQUIRE(people_choise(-36) == 0);
  REQUIRE(people_choise(-37) == 0);
  REQUIRE(people_choise(-38) == 0);
  REQUIRE(people_choise(-39) == 0);
  REQUIRE(people_choise(-40) == 0);
  REQUIRE(people_choise(-41) == 0);
  REQUIRE(people_choise(-42) == 0);
  REQUIRE(people_choise(-43) == 0);
  REQUIRE(people_choise(-44) == 0);
  REQUIRE(people_choise(-45) == 0);
  REQUIRE(people_choise(-46) == 0);
  REQUIRE(people_choise(-47) == 0);
  REQUIRE(people_choise(-48) == 0);
  REQUIRE(people_choise(-49) == 0);
  REQUIRE(people_choise(-50) == 0);
  printf("test people choise complete\n");
}
