#include "./golf.h"
#include <cstring>
#include <iostream>

void setgolf(golf& g, const char* name, int hc) {
  strcpy(g.fullname, name);
  g.handicap = hc;
}

using namespace std;
int setgolf(golf& g) {
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
  setgolf(g, name, handicap);

  return 1;
}

// function resets handicap to new value
void handicap(golf& g, int hc) {
  g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf& g) {
  cout << "name: " << g.fullname << endl;
  cout << "handicap: " << g.handicap << endl;
}