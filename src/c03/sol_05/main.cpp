#include <iomanip>
#include <iostream>

int main() {
  using namespace std;
  long long am, all;
  cout << "Enter the world's population: ";
  cin >> all;
  cout << "Enter the population of the US: ";
  cin >> am;
  double ratio = am * 100.0 / all;
  cout << "The population of the US is " << std::setprecision(6) << ratio
       << "% of the world population";
  return 0;
}