#include <cctype>
#include <iostream>

int main() {
  using namespace std;
  char c = '0';
  while (c != '@') {
    c = cin.get();
    if (!isdigit(c)) {
      if (isupper(c)) {
        cout << (char)tolower(c);
      } else if (isalpha(c)) {
        cout << (char)toupper(c);
      }
    }
  }

  return 0;
}