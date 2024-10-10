#include <iostream>
#include <string>

int main() {
  using namespace std;

  struct member {
    string name;
    double money;
  };

  int num;
  cout << "捐赠者数目: ";
  cin >> num;

  member* members = new member[num];
  for (int i = 0; i < num; i++) {
    cout << "捐赠者" << i + 1 << "\n";
    cout << "姓名: ";
    cin >> members[i].name;
    cout << "金额: ";
    cin >> members[i].money;
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
  return 0;
}