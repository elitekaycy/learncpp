#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string name;

  if (true)
    cout << "Print this if statement is true" << endl;

  char again = 'y';
  while (again == 'y') {
    cout << "Enter your name" << endl;
    cin >> name;

    if (name != "") {
      cout << "username is " << name << endl;
      cout << "Would you like to try again (y/n): " << endl;
      cin >> again;
    }
  }

  cout << "Okay bye...";
  return 0;
}
