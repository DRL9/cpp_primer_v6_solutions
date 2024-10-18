#include "./golf.h"
#include <cstring>
#include <iostream>
using namespace std;

golf::golf(const char* name, int hc) {
  strcpy(fullname, name);
  handicap = hc;
}

int golf::setgolf() {
  char name[Len];
  int handicap;
  cout << "输入名字: ";
  cin.getline(name, Len);
  if (strlen(name) == 0) {
    return 0;
  }
  cout << "输入handicap: ";
  cin >> handicap;
  cin.get();
  golf g{name, handicap};
  *this = g;
  return 1;
}

void golf::reset_handicap(int hc) {
  handicap = hc;
}

void golf::showgolf() const {
  cout << "name: " << fullname << endl;
  cout << "handicap: " << handicap << endl;
}