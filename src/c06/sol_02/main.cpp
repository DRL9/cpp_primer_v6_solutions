#include <array>
#include <iostream>

int main() {
  using namespace std;
  const int SIZE = 10;
  array<double, SIZE> list;
  int i = 0;
  double v;
  cout << "请输入数字: " << endl;
  while (i < SIZE && (cin >> v)) {
    list[i] = v;
    i++;
  }
  double total = 0;
  double avg = 0;
  int count = 0;
  for (int j = 0; j < i; j++) {
    total += list[j];
  }
  avg = total / i;

  for (int j = 0; j < i; j++) {
    if (list[j] > avg) {
      count++;
    }
  }

  cout << "平均值: " << avg << endl;
  cout << "大于平均值个数: " << count << endl;
  return 0;
}