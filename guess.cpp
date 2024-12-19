#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  srand(static_cast<unsigned int>(time(0)));

  unsigned short int guesses = 0;
  int random_num = rand();
  int num_random = (random_num % 100) + 1;
  short int guess;

  do {
    cout << "Enter a guess: ";
    cin >> guess;
    ++guesses;
    if (guess > num_random) {
      cout << "Too high!\n\n";
    } else if (guess < num_random) {
      cout << "Too low!\n\n";
    } else {
      cout << "\nThat’s it! You got it in " << guesses << " guesses!\n";
    }
  } while (guess != num_random);

  cout << "great play" << endl;
  cout << "Total number of guesses " << guesses << endl;
  return 0;
}
