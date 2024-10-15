#include <iostream>

using namespace std;

int invoke_time = 0;
void foo(const char* str, int flag) {
  invoke_time++;
  if (flag == 0) {
    cout << str << endl;
  } else {
    for (int i = 0; i < invoke_time; i++)
      cout << i << ":" << str << endl;
  }
}

int main() {
  foo("hello", 1);
  foo("hello", 0);
  foo("hello", 1);
  foo("hello", 1);
  return 0;
}