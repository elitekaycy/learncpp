#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  int x = 10;
  int *pPointer = 0;

  pPointer = &x;

  // pointers can be used with objects as well as primitive types
  cout << "Pointer  " << *pPointer << endl;

  string str = "hello world";
  string *pstr = &str;

  cout << "Pointer address " << pstr << " " << &str << endl;

  cout << "Pointer value " << *pstr << " " << str << endl;

  // Constant pointers
  // the address stored in the pointer can never change
  int score = 100;
  int test_score = 200;
  int *const pScore = &score;

  /*pScore = &test_score; this should result in an error*/
  // although you cant change the pointer address, you can still change  the
  // valule it points to
  *pScore = 300;
  cout << "pScore " << *pScore << endl;

  // Pointer to a constant
  const int *pConstant;

  int lives = 3;
  pConstant = &lives;
  /**pConstant = 4; this should throw int an error*/

  // a constant pointer to a pointer to aconstant combines both, cant alter
  // memory address and value
  int bonus = 10;
  const int *const pBonus = &bonus;

  return 0;
}
