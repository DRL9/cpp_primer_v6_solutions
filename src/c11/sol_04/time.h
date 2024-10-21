#pragma once
#include <iostream>

class Time {
 private:
  int hour;
  int minute;

 public:
  Time() {
    hour = 0;
    minute = 0;
  };
  Time(int h, int m = 0) : hour(h), minute(m) {}
  Time operator+(const Time&) const;
  Time operator-(const Time&) const;
  Time operator*(double) const;
  friend Time operator*(double, const Time&);
  friend std::ostream& operator<<(std::ostream&, const Time&);
};