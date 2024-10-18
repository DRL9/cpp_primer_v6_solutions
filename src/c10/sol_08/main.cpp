#include <iostream>
#include "./list.h"

using namespace std;
void show(Item& s) {
  cout << s << ", ";
}

int main() {
  List l1;
  cout << boolalpha;
  cout << l1.is_empty() << ", " << l1.is_full() << endl;
  l1.add(1);
  l1.add(2);
  l1.visit(show);
  cout << endl;
  cout << l1.is_empty() << ", " << l1.is_full() << endl;

  return 0;
}