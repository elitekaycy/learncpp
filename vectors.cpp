#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

  vector<string> inventory;

  inventory.push_back("hello");
  inventory.push_back("world");
  inventory.push_back("dickson");

  inventory.pop_back();
  unsigned short int count = 0;

  for (; count < inventory.size();) {

    cout << "current inventory " << inventory[count] << endl;
    ++count;
  }
  return 0;
}
