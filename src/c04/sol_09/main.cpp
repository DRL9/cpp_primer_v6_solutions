#include <iostream>
#include <string>
using namespace std;

int main() {
  struct CandyBar {
    string brand;
    double weight;
    int cal;
  };
  CandyBar* snacks = new CandyBar[3];
  snacks[0] = CandyBar{"Mocha Munch1", 2.3, 350};
  snacks[1] = CandyBar{"Mocha Munch2", 2.3, 350};
  snacks[2] = CandyBar{"Mocha Munch3", 2.3, 350};

  for (int i = 0; i < 3; i++) {
    CandyBar snack = snacks[i];
    cout << "品牌: " << snack.brand << "\n";
    cout << "重量: " << snack.weight << "\n";
    cout << "卡路里: " << snack.cal << "\n";
    cout << "---" << endl;
  }
  delete[] snacks;
  return 0;
}