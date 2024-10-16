#include "./sales.h"
#include <iostream>

namespace SALES {
using namespace std;
// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void setSales(Sales& s, const double ar[], int n) {
  double min = ar[0];
  double max = ar[0];
  double total = 0;
  int i = 0;
  for (; i < n && i < QUARTERS; i++) {
    s.sales[i] = ar[i];
    if (min > ar[i]) {
      min = ar[i];
    }
    if (max < ar[i]) {
      max = ar[i];
    }
    total += ar[i];
  }
  s.average = total / i;
  s.min = min;
  s.max = max;
}
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void setSales(Sales& s) {
  cout << "input sales: ";
  double ar[QUARTERS];
  for (int i = 0; i < QUARTERS; i++) {
    cin >> ar[i];
  }
  setSales(s, ar, QUARTERS);
}
// display all information in structure s
void showSales(const Sales& s) {
  cout << "sales: ";
  for (int i = 0; i < QUARTERS; i++) {
    cout << s.sales[i] << " ";
  }
  cout << endl;
  cout << "average: " << s.average << endl;
  cout << "min: " << s.min << endl;
  cout << "max: " << s.max << endl;
}
}  // namespace SALES
