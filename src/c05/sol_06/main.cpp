#include <iostream>
#include <string>

int main() {
  using namespace std;
  string months[]{"一月", "二月", "三月", "四月", "五月",   "六月",
                  "七月", "八月", "九月", "十月", "十一月", "十二月"};

  int sale_volumes[3][12];

  int total_year[3];
  int total = 0;
  for (int j = 0; j < 3; j++) {
    total_year[j] = 0;
    for (int i = 0; i < 12; i++) {
      cout << "第" << j + 1 << "年" << months[i] << "销量: ";
      cin >> sale_volumes[j][i];
      total += sale_volumes[j][i];
      total_year[j] += sale_volumes[j][i];
    }
  }
  for (int i = 0; i < 3; i++) {
    cout << "第" << i + 1 << "年销量: " << total_year[i] << endl;
  }
  cout << "总销量： " << total << endl;
  return 0;
}