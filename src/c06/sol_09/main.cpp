#include <fstream>
#include <iostream>
#include <string>

int main() {
  using namespace std;

  struct member {
    string name;
    double money;
  };
  ifstream infile;
  infile.open("./build/c06_sol_09.txt");
  if (!infile.is_open()) {
    cout << "文件打开失败" << endl;
    exit(EXIT_FAILURE);
  }

  int num;
  infile >> num;
  infile.get();
  member* members = new member[num];
  for (int i = 0; i < num; i++) {
    getline(infile, members[i].name);
    infile >> members[i].money;
    infile.get();
  }
  bool has_data = false;
  cout << "Grand Patrons: " << endl;
  for (int i = 0; i < num; i++) {
    if (members[i].money > 10000) {
      cout << members[i].name << ": " << members[i].money << endl;
      has_data = true;
    }
  }
  if (!has_data) {
    cout << "none\n";
  }
  has_data = false;
  cout << "Patrons: " << endl;
  for (int i = 0; i < num; i++) {
    if (members[i].money <= 10000) {
      cout << members[i].name << ": " << members[i].money << endl;
      has_data = true;
    }
  }

  if (!has_data) {
    cout << "none\n";
  }
  delete[] members;
  infile.close();
  return 0;
}