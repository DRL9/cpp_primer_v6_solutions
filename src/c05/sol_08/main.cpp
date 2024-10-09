#include <cstring>
#include <iostream>

int main() {
  using namespace std;
  int total_word = 0;
  cout << "Enter words (to stop, type the word done):" << endl;
  char sentences[200];
  cin.getline(sentences, 199);

  char word[100];
  int start = 0;
  for (int i = 0; i < 200; i++) {
    if (sentences[i] == ' ') {
      word[start] = '\0';
      if (!strcmp(word, "done")) {
        break;
      }
      total_word++;
      start = 0;
    } else {
      word[start++] = sentences[i];
    }
  }
  cout << "You entered a total of " << total_word << " words." << endl;
  return 0;
}