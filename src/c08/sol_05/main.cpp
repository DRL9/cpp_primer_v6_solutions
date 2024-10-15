#include <iostream>

using namespace std;

template <typename T>
T max5(T input[5]) {
  T max = input[0];
  for (int i = 1; i < 5; i++) {
    if (input[i] > max) {
      max = input[i];
    }
  }
  return max;
}

int main() {
  int a[5]{1, 2, 3, 4, 5};
  double b[5]{23.4, 23.2, 12.3, 43.5, 34.5};
  cout << max5(a) << endl;
  cout << max5(b) << endl;
  return 0;
}