#include <iostream>

int main() {
  using namespace std;

  double distance = 0;
  cout << "请输入距离: ";
  cin >> distance;
  while (!cin.good()) {
    cout << "请输入数字: ";
    cin.clear();
    cin >> distance;
  }

  double yard = distance * 220;
  cout << "等于 " << yard << " 码" << endl;

  return 0;
}