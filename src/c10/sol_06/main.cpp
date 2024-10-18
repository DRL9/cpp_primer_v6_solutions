#include <iostream>
#include "./move.h"

int main() {
  using namespace std;
  Move m1{1, 1};
  m1.showmove();
  Move m2 = m1.add({3, 4});
  m2.showmove();
  m2.reset(2, 2);
  m2.showmove();

  return 0;
}