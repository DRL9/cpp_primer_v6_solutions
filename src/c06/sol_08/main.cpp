#include <fstream>
#include <iostream>

int main() {
  using namespace std;

  ifstream infile;
  infile.open("./.gitignore");
  if (!infile.is_open()) {
    cout << "文件打开失败" << endl;
    exit(EXIT_FAILURE);
  }

  int count = 0;
  char c;
  while (infile.get(c)) {
    count++;
  }
  cout << "total char: " << count << endl;
  infile.close();
  return 0;
}