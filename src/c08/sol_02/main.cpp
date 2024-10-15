#include <cstring>
#include <iostream>
using namespace std;

struct CandyBar {
  char brand[100];
  double weight;
  int hot;
};

void set_candy_bar(CandyBar& candy,
                   const char* brand = "Millennium Munch",
                   double weight = 2.85,
                   int hot = 350) {
  strcpy(candy.brand, brand);
  candy.weight = weight;
  candy.hot = hot;
}

void show(const CandyBar& candy) {
  cout << "brand: " << candy.brand << endl;
  cout << "weight: " << candy.weight << endl;
  cout << "hot: " << candy.hot << endl;
}

int main() {
  CandyBar candy;
  set_candy_bar(candy);
  show(candy);
  return 0;
}