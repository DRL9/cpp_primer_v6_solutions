#include <iostream>
#include <string>

using namespace std;
struct Pizza {
  string brand;
  double diameter;
  double weight;
};

int main() {
  auto pizza = new Pizza;

  cout << "请输入直径： ";
  cin >> pizza->diameter;
  cin.get();  // 去掉 \n

  cout << "请输入公司名称: ";
  getline(cin, pizza->brand);

  cout << "请输入重量： ";
  cin >> pizza->weight;

  cout << "品牌: " << pizza->brand << "\n";
  cout << "直径: " << pizza->diameter << "\n";
  cout << "重量: " << pizza->weight << "\n";

  delete pizza;

  return 0;
}