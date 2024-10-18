#pragma once

class Plorg {
 private:
  static const int Len = 19;
  char name[Len + 1];
  int ci = 50;

 public:
  Plorg(const char* n = "Plorga");
  void setci(int c);
  void show() const;
};
