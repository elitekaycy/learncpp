#include <iostream>

#include <deque>
#include <map>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {

  map<string, string> map = {{"John", "Doe"}};

  for (const auto &pair : map) {
    cout << pair.first << " ==> " << pair.second << endl;
  }

  return 0;
}
