#include "./time.h"
#include <iomanip>
#include <iostream>

using namespace std;
Time Time::operator+(const Time& t) const {
  int m = t.minute + minute;
  int h = t.hour + hour;
  Time tmp{h + m / 60, m % 60};
  return tmp;
}

Time Time::operator-(const Time& t) const {
  int m = minute - t.minute;
  int h = hour - t.hour;
  if (m < 0) {
    m += 60;
    h--;
  }
  Time tmp{h + m / 60, m % 60};
  return tmp;
}

Time Time::operator*(double n) const {
  int m = (minute + hour * 60) * n;
  Time tmp{m / 60, m % 60};
  return tmp;
}
Time operator*(double n, const Time& t) {
  return t * n;
}

ostream& operator<<(ostream& os, const Time& t) {
  os << std::setw(2) << std::setfill('0') << std::right << t.hour << ":"
     << std::setw(2) << std::setfill('0') << std::right << t.minute;
  return os;
}