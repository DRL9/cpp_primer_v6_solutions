#include <climits>
#include <iostream>
#include "../sol_02/vector.h"

int main() {
  using namespace std;
  using VECTOR::Vector;

  srand(time(0));
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  const double target = 50;
  const double dstep = 2;
  double n;
  cout << "Enter N (q to quit): ";
  if (cin >> n) {
    unsigned long max_steps = 0;
    unsigned long min_steps = ULONG_MAX;
    unsigned long total_steps = 0;
    for (int i = 0; i < n; i++) {
      unsigned long steps = 0;
      while (result.magval() < target) {
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
        result = result + step;
        steps++;
      }
      if (steps > max_steps) {
        max_steps = steps;
      }
      if (steps < min_steps) {
        min_steps = steps;
      }
      total_steps += steps;
      steps = 0;
      result.reset(0.0, 0.0);
    }
    cout << "max_steps: " << max_steps << endl;
    cout << "min_steps: " << min_steps << endl;
    cout << "avg_steps: " << total_steps / n << endl;
  }
  cout << "Bye!\n";
  cin.clear();
  while (cin.get() != '\n')
    continue;

  return 0;
}