#include "./plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char* n) {
  strcpy(name, n);
}

void Plorg::setci(int c) {
  ci = c;
}

void Plorg::show() const {
  using namespace std;
  cout << "name: " << name << ", ci: " << ci << endl;
}