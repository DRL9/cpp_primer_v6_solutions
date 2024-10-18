#pragma once

typedef double Item;

class List {
 private:
  static const int MAX = 2;
  int idx = 0;
  Item v[MAX];

 public:
  bool add(const Item& i);
  bool is_empty() const;
  bool is_full() const;
  void visit(void (*pf)(Item&)) const;
};