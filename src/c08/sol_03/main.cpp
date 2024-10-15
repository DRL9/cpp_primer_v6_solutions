#include <cctype>
#include <iostream>
#include <string>

using namespace std;

void str_to_upper(string& str) {
  for (int i = 0; i < str.size(); i++) {
    str[i] = toupper(str[i]);
  }
}

int main() {
  cout << "Enter a string (q to quit): ";
  string str;
  while (getline(cin, str)) {
    if (str == "q") {
      break;
    }
    str_to_upper(str);
    cout << str << endl;
    cout << "Next string (q to quit): ";
  }
  cout << "Bye.\n";

  return 0;
}