#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(10);
  vec.push_back(7);
  vec.push_back(9);
  vec.push_back(8);

  // find is a part of the algorithm library to dind elements
  auto iter = find(vec.begin(), vec.end(), 8);
  if (iter != vec.end()) {
    cout << "found iter " << &iter << " ==> " << *iter << endl;
  }

  vec.erase(vec.begin());

  for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
    cout << "current iter " << *iter << endl;
  }

  return 0;
}
