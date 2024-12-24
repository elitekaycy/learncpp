
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
  Person(const std::string &name);
  void getName() const;

private:
  std::string mName;
};

#endif
