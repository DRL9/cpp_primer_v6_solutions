#include <iostream>

int main() {
  using namespace std;
  int min, max;
  cout << "请输入小数: ";
  cin >> min;
  cout << "请输入大数: ";
  cin >> max;
  int total = 0;
  for (int i = min; i <= max; i++) {
    total += i;
  }
  cout << min << "-" << max << "和为: " << total << endl;
  return 0;
}