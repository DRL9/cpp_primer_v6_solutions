#include <iostream>

int main() {
  using namespace std;
  long double total = 0;
  while (true) {
    double num;
    cout << "请输入数字: ";
    cin >> num;
    if (num < 0.00000001) {
      cout << "end." << endl;
      break;
    }
    total += num;
    cout << "和为: " << total << endl;
  }

  return 0;
}