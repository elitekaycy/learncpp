#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  /** Ranges in 32 bit - -32,768 to 32,767 **/
  short int short_int = 0;

  /** Ranges from 0 to 65,535 - unsigned meaning positive numbers only **/
  unsigned short int unsigned_short_int = 34000;

  /** -2,147,483,648 to 2,147,483,648 but unsigned by default **/
  int int_;

  /** all positive (0  to 4,294,976, 295 ) **/
  unsigned long int unsigned_long_int;

  float float_;
  double double_;
  long long_double_;
  char char_;
  bool bool_;

  /**
   * Learn Typedef
   * Typedef is used to define new types based of existing types
   * */
  typedef unsigned short int ushort;
  ushort ushort_;

  unsigned long int game_score;
  cout << "Enter game score ... =>  \n" << endl;
  cin >> game_score;
  cout << "game score . cpp" << game_score << endl;
  return 0;
}
