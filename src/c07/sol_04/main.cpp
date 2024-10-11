#include <iomanip>
#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks) {
  long denominator = 1;
  unsigned i = 0;
  while (i++ < picks) {
    denominator *= numbers--;
  }
  long molecule = 1;
  while (picks > 0) {
    molecule *= picks--;
  }
  return 1.0 * molecule / denominator;
}

int main() {
  cout << "头奖概率: " << fixed << setprecision(10)
       << probability(47, 5) * probability(27, 1) * 100 << "%" << endl;
  return 0;
}