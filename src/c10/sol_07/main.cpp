#include <iostream>
#include "./plorg.h"

int main() {
  using namespace std;
  Plorg p1;
  p1.show();
  p1.setci(21);
  p1.show();

  Plorg p2{"pg2"};
  p2.show();

  return 0;
}