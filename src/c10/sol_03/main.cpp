#include <iostream>
#include "./golf.h"

int main() {
  using namespace std;

  const int size = 4;
  golf golfs[size];
  int i = 0;
  for (; i < size; i++) {
    int result = golfs[i].setgolf();
    if (result == 0) {
      break;
    }
  }
  for (int j = 0; j < i; j++) {
    golfs[j].showgolf();
  }

  return 0;
}