#include <iostream>
#include <string>
using namespace std;

int main() {
  struct CandyBar {
    string brand;
    double weight;
    int cal;
  };
  CandyBar snacks[]{
      CandyBar{"Mocha Munch", 2.3, 350},
      CandyBar{"Mocha Munch", 2.3, 350},
      CandyBar{"Mocha Munch", 2.3, 350},
  };
  for (auto snack : snacks) {
    cout << "品牌: " << snack.brand << "\n";
    cout << "重量: " << snack.weight << "\n";
    cout << "卡路里: " << snack.cal << "\n";
    cout << "---" << endl;
  }
  return 0;
}