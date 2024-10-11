#include <iostream>

long factorial(long n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  using namespace std;
  long n;
  cout << "输入数字(非数字或小于0退出)" << endl;
  while (cin >> n && n >= 0) {
    long result = factorial(n);
    cout << n << "!=" << result << endl;
  }

  return 0;
}