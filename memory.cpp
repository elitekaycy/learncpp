#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int *pNum = NULL;
  pNum = new int;

  *pNum = 21;
  cout << "memory.cpp" << endl;

  delete pNum;
  return 0;
}
