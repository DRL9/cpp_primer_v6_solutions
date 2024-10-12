#include <iostream>

double add(double x, double y) {
  return x + y;
}

double mul(double x, double y) {
  return x * y;
}

double calculate(double x, double y, double (*fn)(double, double)) {
  return fn(x, y);
}

int main() {
  using namespace std;
  double x, y;
  double (*fns[3])(double, double){add, add, mul};
  cout << "请输入两个数: \n";
  while (cin >> x >> y) {
    cout << "result is: ";
    double result;
    for (int i = 0; i < 3; i++) {
      result = fns[i](x, y);
      cout << result << " ";
    }
    cout << endl;
  }

  return 0;
}