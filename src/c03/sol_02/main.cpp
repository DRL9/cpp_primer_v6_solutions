#include <cmath>
#include <iomanip>
#include <iostream>

void get_int(int& n) {
  using namespace std;
  while (!(cin >> n)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
  }
}

int main() {
  using namespace std;
  int feet, inch, pang;
  cout << "英尺: ";
  get_int(feet);
  cout << "英寸: ";
  get_int(inch);
  cout << "磅: ";
  get_int(pang);

  const double INCH_TO_METER = 0.0254;
  const int FEET_TO_INCH = 12;
  const double KILO_TO_PANG = 2.2;
  using std::pow;
  double bmi = pang / KILO_TO_PANG /
               pow((feet * FEET_TO_INCH + inch) * INCH_TO_METER, 2);
  cout << "BMI: " << std::setprecision(2) << bmi << endl;

  return 0;
}