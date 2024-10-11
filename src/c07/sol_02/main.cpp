#include <array>
#include <iostream>

using namespace std;
void input(double* scores, size_t s, int& count) {
  cout << "输入成绩(输入非数字退出): " << endl;
  while (count < s && (cin >> *scores)) {
    count++;
    scores++;
  }
}

void show(double scores[], int s) {
  cout << "成绩: ";
  for (int i = 0; i < s; i++) {
    cout << scores[i];
    if (i < s - 1) {
      cout << ", ";
    }
  }
  cout << endl;
}

void avg(double scores[], int s) {
  double total = 0;
  for (int i = 0; i < s; i++) {
    total += scores[i];
  }
  cout << "平均成绩： " << total / s << endl;
}

int main() {
  double scores[10];
  int count = 0;
  input(scores, sizeof(scores) / sizeof(double), count);
  show(scores, count);
  avg(scores, count);
  cout << "Bye!" << endl;
  return 0;
}