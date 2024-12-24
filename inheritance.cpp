#include <iostream>

using namespace std;

class Enemy {

public:
  Enemy();
  virtual void Attack();

protected:
  int m_Damage;
};

Enemy::Enemy() : m_Damage(10) {}

void Enemy::Attack() { cout << "attack inflicted " << m_Damage << endl; }

// when a class contains one pure virtual function it is an abstract class
class Creature {

public:
  Creature();
  virtual void greet() const = 0; // making a pure virtual function
  virtual void draw();
};

class Boss : public Enemy {
public:
  Boss();
  void SpecialAttack() const;
  virtual void Attack() override;

private:
  int m_DamageMultiplier;
};

Boss::Boss() : m_DamageMultiplier(3) {}

void Boss::Attack() { cout << "attack from boss" << m_Damage << endl; }
void Boss::SpecialAttack() const {
  cout << "damage multiplied " << m_DamageMultiplier * m_Damage << endl;
}
int main(int argc, char *argv[]) {

  Boss boss;
  boss.Attack();
  boss.SpecialAttack();

  return 0;
}
