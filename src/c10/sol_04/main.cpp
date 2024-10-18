#include <iostream>
#include "./sale.h"

int main() {
  using namespace std;
  using namespace SALES;
  Sales s1;
  s1.setSales();
  Sales s2 = s1;
  s1.showSales();
  s2.showSales();

  return 0;
}