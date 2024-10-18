#include <iostream>
#include "./my_stack.h"

int main() {
  using namespace std;

  Stack s;
  s.show();
  s.push({"c1", 12});

  customer c2;
  s.pop(c2);
  s.show();

  s.push({"c9", 302});
  s.show();
  s.pop(c2);
  s.show();

  return 0;
}