#include <iomanip>
#include <iostream>

using namespace std;
void show(int h, int m) {
  // 定宽字符
  cout << "Time: " << setw(2) << setfill('0') << h << ":" << setw(2)
       << setfill('0') << m << endl;
}

int main() {
  int hour;
  int minute;
  cout << "Enter the number of hours: ";
  while (!(cin >> hour)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
  }
  cout << "Enter the number of minutes: ";

  while (!(cin >> minute)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
  }
  show(hour, minute);
  return 0;
}