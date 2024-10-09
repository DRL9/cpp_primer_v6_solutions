#include <iostream>
#include <string>

using namespace std;
struct Pizza {
  string brand;
  double diameter;
  double weight;
};

int main() {
  Pizza pizza;

  cout << "请输入公司名称: ";
  getline(cin, pizza.brand);

  cout << "请输入直径： ";
  cin >> pizza.diameter;
  cout << "请输入重量： ";
  cin >> pizza.weight;

  cout << "品牌: " << pizza.brand << "\n";
  cout << "直径: " << pizza.diameter << "\n";
  cout << "重量: " << pizza.weight << "\n";

  return 0;
}