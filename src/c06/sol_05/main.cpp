#include <iostream>

int main() {
  using namespace std;

  double salary;
  cout << "收入: ";
  double intervals[][2] = {{5000, 15000}, {15000, 35000}, {35000, 99999999999}};
  double taxes[] = {0.1, 0.15, 0.2};
  while ((cin >> salary) && salary >= 0) {
    double total_tax = 0;
    for (int i = 0; i < sizeof(taxes) / sizeof(double); i++) {
      auto tax = taxes[i];
      auto interval = intervals[i];
      if (salary > interval[0]) {
        if (salary <= interval[1]) {
          total_tax += (salary - interval[0]) * tax;
          break;
        } else {
          total_tax += (interval[1] - interval[0]) * tax;
        }
      }
    }
    cout << "税: " << total_tax << endl;
    cout << "收入: ";
  }

  return 0;
}