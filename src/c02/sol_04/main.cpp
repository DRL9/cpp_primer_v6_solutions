#include <iostream>

using namespace std;

int convert(int age) {
  return age * 12;
}

int main() {
  cout << "Enter your age: ";
  int age;
  while (!(cin >> age)) {
    cout << "请输入整数: ";
    if (cin.fail() && !cin.eof()) {
      // 因为不匹配造成的错误
      cin.clear();
      while (cin.get() != '\n') {
        // 舍弃流中的错误输入
        continue;
      }
    } else {
      cout << "系统异常" << endl;
      return 1;
    }
  }
  int months = convert(age);
  cout << "Your age in months is " << months << endl;

  return 0;
}