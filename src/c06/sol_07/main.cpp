#include <cctype>
#include <iostream>

int main() {
  using namespace std;
  cout << "Enter words (q to quit):" << endl;
  char sentences[1000];
  int vowels = 0;
  int consonants = 0;
  int others = 0;

  while (cin >> sentences && strcmp(sentences, "q")) {
    if (isalpha(sentences[0])) {
      switch (sentences[0]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          vowels++;
          break;
        default:
          consonants++;
          break;
      }
    } else {
      others++;
    }
  }

  cout << vowels << " words beginning with vowels" << endl;
  cout << consonants << " words beginning with consonants" << endl;
  cout << others << " words beginning with others" << endl;

  return 0;
}