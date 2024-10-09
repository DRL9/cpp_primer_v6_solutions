#include <iostream>

int main() {
  using namespace std;

  double base_Daphne = 100;
  double rate_Daphne = 0.1;
  double total_Daphne = base_Daphne;
  double base_Cleo = 100;
  double rate_Cleo = 0.05;
  double total_Cleo = base_Cleo;

  int i = 0;
  while (total_Cleo <= total_Daphne) {
    total_Daphne += base_Daphne * rate_Daphne;
    total_Cleo += total_Cleo * rate_Cleo;
    i++;
  }
  cout << i << "年后： " << endl;
  cout << "Daphne: " << total_Daphne << endl;
  cout << "Cleo: " << total_Cleo << endl;

  return 0;
}