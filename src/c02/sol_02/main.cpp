#include <iostream>

int main() {
  using namespace std;

  double distance = 0;
  cout << "请输入距离: ";
  while (!(cin >> distance)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
    cout << "请输入数字: ";
  }

  double yard = distance * 220;
  cout << "等于 " << yard << " 码" << endl;

  return 0;
}