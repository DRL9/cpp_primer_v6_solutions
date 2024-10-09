#include <array>
#include <iostream>

const int ARR_SIZE = 101;
int main() {
  using namespace std;
  array<long double, ARR_SIZE> factorials;
  factorials[0] = factorials[1] = 1;
  for (int i = 2; i < ARR_SIZE; i++) {
    factorials[i] = factorials[i - 1] * i;
  }
  cout << "100!=" << factorials[100];

  return 0;
}