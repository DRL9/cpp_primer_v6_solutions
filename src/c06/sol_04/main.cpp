#include <iostream>

int main() {
  using namespace std;
  const int strsize = 1000;
  struct bop {
    char fullname[strsize];  // real name
    char title[strsize];     // job title
    char bopname[strsize];   // secret BOP name
    int preference;          // 0 = fullname, 1 = title, 2 = bopname
  };

  bop bops[] = {{"Wimp Macho", "Engineer", "STAR", 0},
                {"Raki Rhodes", "Junior Programmer", "SUN", 1},
                {"Celia Laiter", "Broker", "MIPS", 2},
                {"Hoppy Hipman", "Analyst Trainee", "MAGIC", 1},
                {"Pat Hand", "Electrician", "LOOPY", 2}};

  cout << "Benevolent Order of Programmers Report" << endl;
  cout << "a. display by name b. display by title\n"
          "c. display by bopname d.display by preference \n"
          "q.quit "
       << endl;
  cout << "Enter your choice: ";
  char choice;
  cin >> choice;
  while (choice != 'q') {
    switch (choice) {
      case 'a':
        for (auto b : bops) {
          cout << b.fullname << endl;
        }
        break;
      case 'b':
        for (auto b : bops) {
          cout << b.title << endl;
        }
        break;
      case 'c':
        for (auto b : bops) {
          cout << b.bopname << endl;
        }
        break;
      case 'd':
        for (auto b : bops) {
          cout << (b.preference == 0   ? b.fullname
                   : b.preference == 1 ? b.title
                                       : b.bopname)
               << endl;
        }
        break;
      default:
        break;
    }
    cout << "Next choice: ";
    cin >> choice;
  }
  cout << "Bye!" << endl;

  return 0;
}