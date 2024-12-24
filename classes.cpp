#include <iostream>

using namespace std;

class Critter {

public:
  int m_Hunger;
  Critter(int hunger = 0);
  void Greet();
  friend void printData(const Critter &obj);
  friend class CritterFriend;
  Critter operator+(const Critter &other) {
    return Critter(m_Hunger + other.m_Hunger);
  };

private:
  int data;
};

void printData(const Critter &obj) { cout << "Data => " << obj.data << endl; }

Critter::Critter(int hunger) {
  cout << " a new critter has been born!!!" << endl;
  m_Hunger = hunger;
  data = hunger;
}
void Critter::Greet() { cout << "Hello, I am Critter" << m_Hunger << endl; }

class CritterFriend {
public:
  void printData(const Critter &obj) {
    cout << "Data(from CritterFriend) ==> " << obj.data << endl;
  }
};

int main(int argc, char *argv[]) {

  Critter crit(5);
  Critter crit2(7);
  CritterFriend critter_friend;
  Critter finalCritter = crit + crit2;
  /*crit.m_Hunger = 20;*/
  crit.Greet();
  critter_friend.printData(crit);
  printData(finalCritter);

  return 0;
}
