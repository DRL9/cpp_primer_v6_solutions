#include "./list.h"

bool List::add(const Item& i) {
  if (idx >= MAX) {
    return false;
  }

  v[idx++] = i;
  return true;
}

bool List::is_empty() const {
  return idx == 0;
}

bool List::is_full() const {
  return idx == MAX;
}

void List::visit(void (*pf)(Item&)) const {
  for (int i = 0; i < idx; i++) {
    auto tmp = v[i];
    pf(tmp);
  }
}