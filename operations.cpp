#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  unsigned int score = 5000;
  cout << "score: " << score << endl;
  // altering the value of a variable
  score = score + 100;
  cout << "score: " << score << endl;
  // combined assignment operator
  score += 100;
  cout << "score: " << score << endl;
  // increment operators
  int lives = 3;
  ++lives;
  cout << "lives: " << lives << endl;
  lives = 3;
  lives++;
  cout << "lives: " << lives << endl;
  int bonus = ++lives * 10;
  cout << "lives, bonus = " << lives << ", " << bonus << endl;
  lives = 3;
  bonus = lives++ * 10;
  cout << "lives, bonus = " << lives << ", " << bonus << endl;
  // integer wrap around
  score = 4294967295;
  cout << "\nscore: " << score << endl;
  ++score;
  cout << "score: " << score << endl;

  /**
   * Wrapping around means when you increase a value more than it maximum handle
   * instead it moves back to he types minimum value
   * **/

  return 0;
}
