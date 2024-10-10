#include <iostream>

int main() {
  using namespace std;
  cout << "Please enter one of the following choices:" << endl;
  cout << "c) carnivore p) pianist" << endl;
  cout << "t) tree g) game" << endl;
  char select;

  cin >> select;
  while (select != 'c' && select != 't' && select != 'p' && select != 'g') {
    cout << "Please enter a c, p, t, or g: ";
    cin >> select;
  }
  switch (select) {
    case 'c':
      cout << "carnivore" << endl;
      break;
    case 'p':
      cout << "pianist" << endl;
      break;
    case 't':
      cout << "tree" << endl;
      break;
    case 'g':
      cout << "game" << endl;
      break;
    default:
      break;
  }

  return 0;
}