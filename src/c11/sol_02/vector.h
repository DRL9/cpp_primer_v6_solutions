#pragma once
#include <iostream>

namespace VECTOR {
class Vector {
 public:
  enum Mode { RECT, POL };

 private:
  double x;
  double y;
  Mode mode;

 public:
  Vector();
  Vector(double, double, Mode = RECT);
  ~Vector();
  void reset(double, double, Mode = RECT);
  double xval() const { return x; };
  double yval() const { return y; };
  double magval() const;
  double angval() const;
  void polar_mode();
  void rect_mode();
  Vector operator+(const Vector&) const;
  Vector operator-(const Vector&) const;
  Vector operator*(double) const;
  friend Vector operator*(double, const Vector&);
  friend std::ostream& operator<<(std::ostream&, const Vector&);
};
}  // namespace VECTOR