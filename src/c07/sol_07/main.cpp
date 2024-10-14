#include <iostream>
using namespace std;

double* fill_array(double arr[], int limit) {
  int i;
  double temp;
  for (i = 0; i < limit; i++) {
    cout << "Enter value #" << (i + 1) << ":";
    if (!(cin >> temp)) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "input process terminated" << endl;
      break;
    } else if (temp < 0) {
      break;
    }
    *arr = temp;
    arr++;
  }
  return arr;
}

void show_array(const double arr[], const double* end) {
  int i = 0;
  while (arr != end) {
    cout << "#" << (i + 1) << ":" << *arr << endl;
    i++;
    arr++;
  }
}

int main() {
  const int MAX = 10;
  double arr[MAX];
  auto end = fill_array(arr, MAX);
  show_array(arr, end);
  return 0;
}