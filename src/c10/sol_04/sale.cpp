#include "./sale.h"
#include <iostream>
namespace SALES {
using namespace std;
Sales::Sales(const double ar[], int n) {
  double _min = ar[0];
  double _max = ar[0];
  double total = 0;
  int i = 0;
  for (; i < n && i < QUARTERS; i++) {
    sales[i] = ar[i];
    if (_min > ar[i]) {
      _min = ar[i];
    }
    if (_max < ar[i]) {
      _max = ar[i];
    }
    total += ar[i];
  }
  average = total / i;
  min = _min;
  max = _max;
}

Sales::Sales(Sales& s) {
  Sales s0{s.sales, QUARTERS};
  *this = s0;
}

void Sales::setSales() {
  cout << "input sales: ";
  double ar[QUARTERS];
  for (int i = 0; i < QUARTERS; i++) {
    cin >> ar[i];
  }
  Sales s{ar, QUARTERS};
  *this = s;
}

// display all information in structure s
void Sales::showSales() const {
  cout << "sales: ";
  for (int i = 0; i < QUARTERS; i++) {
    cout << sales[i] << " ";
  }
  cout << endl;
  cout << "average: " << average << endl;
  cout << "min: " << min << endl;
  cout << "max: " << max << endl;
}

}  // namespace SALES