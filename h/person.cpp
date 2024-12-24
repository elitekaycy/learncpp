#include "person.h"
#include <iostream>

Person::Person(const std::string &name) : mName(name) {}
void Person::getName() const { std::cout << "name is  " << mName << std::endl; }
