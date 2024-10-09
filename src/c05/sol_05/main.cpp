#include <iostream>

int main() {
  using namespace std;
  string months[]{"一月", "二月", "三月", "四月", "五月",   "六月",
                  "七月", "八月", "九月", "十月", "十一月", "十二月"};

  int sale_volumes[12];

  int total = 0;
  for (int i = 0; i < 12; i++) {
    cout << months[i] << "销量: ";
    cin >> sale_volumes[i];
    total += sale_volumes[i];
  }
  cout << "总销量： " << total << endl;
  return 0;
}