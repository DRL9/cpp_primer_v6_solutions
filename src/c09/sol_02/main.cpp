#include <iostream>
#include <string>
using namespace std;

void strcount(string str);

int main() {
  string str;
  cout << "Enter a line: \n";
  getline(cin, str);
  while (str.size() != 0) {
    strcount(str);
    cout << "enter next line:\n";
    getline(cin, str);
  }

  cout << "Bye.\n";
  return 0;
}

void strcount(string str) {
  // 局部静态变量， 也是程序整个生命周期都占据内存， 但是其作用域仅在函数内
  static int total = 0;
  int char_count = 0;
  for (auto _ : str) {
    char_count++;
  }
  total += char_count;
  cout << char_count << "字符" << endl;
  cout << total << "字符(总)" << endl;
}