#include <iostream>
#include "./sales.h"

int main() {
  using namespace std;
  using namespace SALES;
  Sales s1;
  Sales s2;
  setSales(s1);
  setSales(s2, s1.sales, 2);
  showSales(s1);
  showSales(s2);

  return 0;
}