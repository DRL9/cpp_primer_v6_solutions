#include <iostream>
#include "./account.h"

int main() {
  using namespace std;
  Account a{"Mary", "001", 10};
  a.show();
  a.deposit(100);
  a.show();
  a.withdraw(10);
  a.show();
  if (!a.withdraw(200)) {
    cout << "取款失败" << endl;
  }

  a.show();

  return 0;
}