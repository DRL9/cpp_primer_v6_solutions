#include <iostream>

double cal_avg(double x, double y) {
  return 2.0 * x * y / (x + y);
}

int main() {
  using namespace std;
  double x, y;
  cout << "输入两个数: " << endl;
  while (cin >> x && x != 0 && cin >> y && y != 0) {
    cout << x << "," << y << " 调和平均数是: " << cal_avg(x, y) << endl;
  }

  return 0;
}