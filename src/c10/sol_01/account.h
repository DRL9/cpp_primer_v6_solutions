#pragma once
#include <string>

using std::string;

class Account {
 private:
  string name;
  string id;
  long money;

 public:
  explicit Account(string n, string i, long m) : name(n), id(i), money(m) {};
  void show() const;
  void deposit(long);
  bool withdraw(long);
};