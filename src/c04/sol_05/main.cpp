#include <iostream>
#include <string>
using namespace std;

int main() {
  struct CandyBar {
    string brand;
    double weight;
    int cal;
  };
  auto snack = CandyBar{"Mocha Munch", 2.3, 350};
  cout << "品牌: " << snack.brand << "\n";
  cout << "重量: " << snack.weight << "\n";
  cout << "卡路里: " << snack.cal << endl;
  return 0;
}