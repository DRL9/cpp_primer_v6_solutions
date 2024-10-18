#pragma once

class golf {
 private:
  static const int Len = 40;
  char fullname[Len];
  int handicap;

 public:
  golf() {};
  explicit golf(const char* name, int hc);

  // interactive version:
  // function solicits name and handicap from user
  // and sets the members of g to the values entered
  // returns 1 if name is entered, 0 if name is empty string
  int setgolf();

  // function resets handicap to new value
  void reset_handicap(int hc);

  // function displays contents of golf structure
  void showgolf() const;
};