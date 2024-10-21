#include "./vector.h"
#include <cmath>
#include <iostream>

namespace VECTOR {
using namespace std;
Vector::Vector() {}

Vector::Vector(double a, double b, Mode m) : x(a), y(b), mode(m) {}

Vector::~Vector() {}

void Vector::reset(double a, double b, Mode m) {
  if (m == POL) {
    x = a * cos(b);
    y = a * sin(b);
  } else {
    x = a;
    y = b;
  }
  mode = m;
}

double Vector::magval() const {
  return sqrt(pow(x, 2) + pow(y, 2));
}

double Vector::angval() const {
  if (x == 0.0 && y == 0.0) {
    return 0;
  }
  return atan2(y, x);
}
void Vector::polar_mode() {
  mode = POL;
}
void Vector::rect_mode() {
  mode = RECT;
}
Vector Vector::operator+(const Vector& v) const {
  return Vector(x + v.x, y + v.y, mode);
}
Vector Vector::operator-(const Vector& v) const {
  return Vector(x - v.x, y - v.y, mode);
}
Vector Vector::operator*(double a) const {
  return Vector(x * a, y * a, mode);
}
Vector operator*(double a, const Vector& v) {
  return Vector(v.x * a, v.y * a, v.mode);
}
std::ostream& operator<<(std::ostream& os, const Vector& v) {
  os << "(x, y) = (" << v.x << "," << v.y << ")";
  return os;
}
}  // namespace VECTOR