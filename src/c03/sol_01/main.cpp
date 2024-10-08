#include <iostream>

int main() {
  using namespace std;
  const int INCH_FEET = 12;
  // \b 可以将光标往左移动
  cout << "请输入你的身高(英寸): ___\b\b\b";
  int height;

  while (!(cin >> height)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
  }

  int feet = height / INCH_FEET;
  int inch = height % INCH_FEET;

  cout << "你的身高是: " << feet << "英尺" << inch << "英寸" << endl;
  return 0;
}