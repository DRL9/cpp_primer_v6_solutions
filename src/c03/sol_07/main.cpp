#include <iostream>

int main() {
  using namespace std;
  double eu, mpg;
  cout << "耗油量（升/100公里）：";
  cin >> eu;
  mpg = 1 / (eu / (3.875 * 62.14));
  cout << "耗油量（英里/加仑):" << mpg << endl;
  return 0;
}