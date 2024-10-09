#include <iostream>

int main() {
  using namespace std;
  int num;
  cout << "Enter number of rows: ";
  cin >> num;
  int raw = num;
  while (num--) {
    for (int i = 0; i < num; i++) {
      cout << ".";
    }
    for (int i = 0; i < raw - num; i++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}