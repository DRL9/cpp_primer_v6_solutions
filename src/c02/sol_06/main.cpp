#include <iomanip>
#include <iostream>

double light_to_astronomical(double light) {
  return light * 63240.0;
}

int main() {
  using namespace std;
  using namespace std;
  cout << "Enter the number of light years: ";
  double light_year = 0;
  while (!(cin >> light_year)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
    cout << "请输入数字: ";
  }
  cout << std::fixed;            // 强制使用固定小数点
  cout << std::setprecision(2);  // 小数点显示精度

  cout << light_year << " light years = " << light_to_astronomical(light_year)
       << " astronomical units." << endl;

  return 0;
}