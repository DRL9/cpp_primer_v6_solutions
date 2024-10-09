#include <array>
#include <iostream>

int main() {
  using namespace std;
  const int LEN = 3;
  array<double, LEN> scores;

  for (int i = 0; i < LEN; i++) {
    cout << "请输入成绩 " << i + 1 << ": ";
    cin >> scores[i];
  }
  int total = 0;
  for (int i = 0; i < LEN; i++) {
    cout << "成绩 " << i + 1 << ": " << scores[i] << "\n";
    total += scores[i];
  }

  cout << "平均值: " << total / LEN << endl;

  return 0;
}