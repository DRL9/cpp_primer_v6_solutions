#include <iostream>

double celsius_to_fahrenheit(double c) {
  return 1.8 * c + 32.0;
}

int main() {
  using namespace std;
  cout << "Please enter a Celsius value: ";
  double celsius = 0;
  while (!(cin >> celsius)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
    cout << "请输入数字: ";
  }
  cout << celsius << " degrees Celsius is " << celsius_to_fahrenheit(celsius)
       << " degrees Fahrenheit." << endl;

  return 0;
}