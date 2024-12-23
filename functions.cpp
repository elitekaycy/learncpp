#include <iostream>
#include <string>

using namespace std;

void instruction();
int addNum(int x, int y = 0);

int overload(int num);
string overload(string num);

int main() {
  instruction();
  cout << "add nums " << addNum(5) << endl;
  return 0;
}

void instruction() { cout << "testing functions " << endl; }
int addNum(int x, int y) { return x + y; }

int overload(int num) { return num * 3; }
string overload(string num) { return num + num + num; }
