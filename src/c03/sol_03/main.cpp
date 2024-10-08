#include <iostream>
using namespace std;

void get_int(int& a) {
  while (!(cin >> a)) {
    cin.clear();
    while (cin.get() != '\n') {
      continue;
    }
  }
}
int main() {
  int degrees, minutes, seconds;
  cout << "Enter a latitude in degrees, minutes, and seconds:\n";
  cout << "First, enter the degrees: ";
  get_int(degrees);
  cout << "Next, enter the minutes of arc: ";
  get_int(minutes);
  cout << "Finally, enter the seconds of arc: ";
  get_int(seconds);

  const int DEGREE_TO_MINUTE = 60;
  const int MINUTE_TO_SECOND = 60;

  double result = degrees + minutes * 1.0 / DEGREE_TO_MINUTE +
                  seconds * 1.0 / (DEGREE_TO_MINUTE * MINUTE_TO_SECOND);

  cout << degrees << " degrees, " << minutes << " minutes, " << seconds
       << " seconds = " << result << " degrees" << endl;

  return 0;
}