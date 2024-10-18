#pragma once

struct customer {
  char fullname[35];
  double payment;
};

typedef customer Item;
class Stack {
 private:
  enum { MAX = 10 };
  Item items[MAX];
  int top;
  int total;

 public:
  Stack();
  bool push(const Item&);
  bool pop(Item&);
  void show() const;
};