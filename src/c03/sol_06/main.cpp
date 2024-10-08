#include <iostream>

int main() {
  using namespace std;
  double km, lt;
  cout << "公里：";
  cin >> km;
  cout << "汽油量（升）：";
  cin >> lt;
  cout << "耗油量: " << lt * 100 / km << "升/100公里" << endl;

  return 0;
}