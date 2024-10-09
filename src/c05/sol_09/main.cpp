#include <iostream>
#include <string>

int main() {
  using namespace std;
  int total_word = 0;
  cout << "Enter words (to stop, type the word done):" << endl;
  string sentences;
  getline(cin, sentences);

  string word;
  for (int i = 0; i < sentences.max_size(); i++) {
    if (sentences[i] == ' ') {
      if (word == "done") {
        break;
      }
      total_word++;
      word = "";
    } else {
      word.append({sentences[i]});
    }
  }
  cout << "You entered a total of " << total_word << " words." << endl;
  return 0;
}