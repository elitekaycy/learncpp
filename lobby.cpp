#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Player {

public:
  Player(const string &name = "");
  string GetName() const;
  Player *GetNext() const;
  void SetNext(Player *next);

private:
  string m_Name;
  Player *m_pNext;
};

Player::Player(const string &name) : m_Name(name), m_pNext(0) {}
string Player::GetName() const { return m_Name; };
void Player::SetNext(Player *next) { m_pNext = next; }
Player *Player::GetNext() const { return m_pNext; }

class Lobby {
public:
  Lobby();
  ~Lobby();
  void addPlayer();
  void removePlayer();
  void clear();

  friend ostream &operator<<(ostream &os, const Lobby &aLobby) {
    Player *pIter = aLobby.m_pHead;
    os << "\nHere’s who’s in the game lobby:\n";
    if (pIter == 0) {
      os << "The lobby is empty.\n";
    } else {
      while (pIter != 0) {
        os << pIter->GetName() << endl;
        pIter = pIter->GetNext();
      }
    }
    return os;
  }

private:
  Player *m_pHead;
};

Lobby::Lobby() : m_pHead(0) {}
Lobby::~Lobby() { clear(); }

void Lobby::addPlayer() {

  cout << "Please enter player name" << endl;
  string name;
  cin >> name;

  Player *player = new Player(name);
  if (m_pHead == 0) {
    m_pHead = player;
  } else {
    Player *piter = m_pHead;
    while (piter->GetNext() != 0) {
      piter = piter->GetNext();
    }

    (*piter).SetNext(player);
  }
}

void Lobby::removePlayer() {

  if (m_pHead == 0) {
    cout << "phead is empty" << endl;
  } else {
    Player *temp = m_pHead;
    m_pHead = m_pHead->GetNext();
    delete temp;
  }
}

void Lobby::clear() {

  while (m_pHead != 0) {
    removePlayer();
  }
}

int main(int argc, char *argv[]) {
  Lobby myLobby;
  int choice;
  do {
    cout << myLobby;
    cout << "\nGAME LOBBY\n";
    cout << "0 - Exit the program.\n";
    cout << "1 - Add a player to the lobby.\n";
    cout << "2 - Remove a player from the lobby.\n";
    cout << "3 - Clear the lobby.\n";
    cout << endl << "Enter choice: ";
    cin >> choice;
    switch (choice) {
    case 0:
      cout << "Good-bye.\n";
      break;
    case 1:
      myLobby.addPlayer();
      break;
    case 2:
      myLobby.removePlayer();
      break;
    case 3:
      myLobby.clear();
      break;
    default:
      cout << "That was not a valid choice.\n";
    }
  } while (choice != 0);

  return 0;
}
