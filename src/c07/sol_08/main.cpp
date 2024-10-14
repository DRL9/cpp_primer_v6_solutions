// 方案b
#include <array>
#include <iostream>
using namespace std;

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct Expense {
  double value[Seasons];
};

void fill(Expense* pa);
void show(Expense da);

int main() {
  Expense expenses;
  fill(&expenses);
  show(expenses);
  return 0;
}
void fill(Expense* pa) {
  for (int i = 0; i < Seasons; i++) {
    std::cout << "Enter " << Snames[i] << " expenses: ";
    std::cin >> (pa->value)[i];
  }
}
void show(Expense da) {
  double total = 0.0;
  std::cout << "\nEXPENSES\n";
  for (int i = 0; i < Seasons; i++) {
    std::cout << Snames[i] << ": $" << da.value[i] << std::endl;
    total += da.value[i];
  }
  std::cout << "Total Expenses: $" << total << std::endl;
}