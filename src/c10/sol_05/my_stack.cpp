#include "./my_stack.h"
#include <iostream>

Stack::Stack() {
  top = 0;
  total = 0;
}

bool Stack::push(const Item& i) {
  if (top >= MAX) {
    return false;
  }
  items[top++] = i;
  return true;
}

bool Stack::pop(Item& i) {
  if (top == 0) {
    return false;
  }
  i = items[--top];
  total += i.payment;
  return true;
}

void Stack::show() const {
  using namespace std;
  cout << "top: " << top << endl;
  cout << "total: " << total << endl;
}