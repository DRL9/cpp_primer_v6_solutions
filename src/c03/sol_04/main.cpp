#include <iostream>

int main() {
  using namespace std;
  int long long seconds;
  cout << "Enter the number of seconds: ";
  cin >> seconds;

  const int DAY_TO_HOUR = 24;
  const int H_TO_M = 60;
  const int M_TO_S = 60;

  int day = seconds / (H_TO_M * M_TO_S * DAY_TO_HOUR);
  int hour =
      (seconds - day * (H_TO_M * M_TO_S * DAY_TO_HOUR)) / (H_TO_M * M_TO_S);
  int minute = (seconds - day * (H_TO_M * M_TO_S * DAY_TO_HOUR) -
                hour * H_TO_M * M_TO_S) /
               M_TO_S;
  int second = seconds % M_TO_S;

  cout << seconds << " seconds = " << day << " days, " << hour << " hours, "
       << minute << " minutes, " << second << " seconds" << endl;

  return 0;
}