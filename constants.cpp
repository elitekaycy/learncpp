#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  const int CONST_POINT = 32;

  enum difficulty { NOVICE, EASY, NORMAL, HEAD };
  enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };

  difficulty myDifficulty = EASY;
  shipCost shipCost = BOMBER_COST;

  cout << "constants " << endl;
  cout << "_difficulty  " << myDifficulty << endl;
  cout << "_shipCost  " << shipCost << endl;
  return 0;
}
