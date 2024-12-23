#include <iostream>
#include <vector>

using namespace std;

typedef unsigned short int uscore;

void swap(int &x, int &oy);
void display(const vector<string> &vec);

int main() {

  uscore score = 100;
  uscore &score_ref = score;

  cout << "score is  => " << score << endl;
  cout << "score_ref is  => " << score_ref << endl;

  int x = 20;
  int y = 10;

  swap(x, y);

  cout << "x should be 10 now  =>  " << x << endl;
  cout << "y should be 20 now  =>  " << y << endl;

  vector<string> vec = {"hello", "world"};
  display(vec);
  return 0;
}

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void display(const vector<string> &vec) {

  for (vector<string>::const_iterator iter = vec.begin(); iter != vec.end();
       ++iter) {

    cout << *iter << endl;
  }
}
