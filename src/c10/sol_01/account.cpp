#include "./account.h"
#include <iostream>

using namespace std;
void Account::show() const {
  cout << "id: " << id << endl;
  cout << "name: " << name << endl;
  cout << "money: " << money << endl;
}

void Account::deposit(long m) {
  money += m;
}

bool Account::withdraw(long m) {
  if (money < m) {
    return false;
  }
  money -= m;
  return true;
}