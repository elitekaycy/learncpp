#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  string y = "hello";
  int x = 10;

  int &_xref = x;
  _xref = 20;
  int *x_ = &x;

  string &_y = y;
  _y = "hell";
  string *y_ = &y;

  cout << x_ << " => " << *x_ << endl;
  cout << y_ << " => " << *y_ << (*y_).size() << " or " << y_->size() << endl;

  return 0;
}
