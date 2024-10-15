#include <cstring>
#include <iostream>
template <typename T>
T maxn(T input[], int count);

template <>
const char* maxn(const char* input[], int count);

int main() {
  using namespace std;
  int a[6]{11, 1, 2, 3, 4, 13};
  double b[4]{1.1, 2.3, 1.3, 14.3};
  cout << maxn(a, 6) << endl;
  cout << maxn(b, 6) << endl;

  const char* c[]{"hello", "maxLength"};
  cout << maxn(c, sizeof(c) / sizeof(char*)) << endl;
  return 0;
}

template <typename T>
T maxn(T input[], int count) {
  auto max = input[0];
  for (int i = 1; i < count; i++) {
    if (max < input[i]) {
      max = input[i];
    }
  }
  return max;
}

template <>
const char* maxn(const char* input[], int count) {
  const char* max = input[0];
  for (int i = 1; i < count; i++) {
    if (strlen(max) < strlen(input[i])) {
      max = input[i];
    }
  }
  return max;
}