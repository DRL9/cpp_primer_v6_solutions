#include <cstring>
#include <iostream>

int main() {
  using namespace std;
  char first_name[100];
  char last_name[100];
  char name[200];
  cout << "Enter your first name: ";
  cin.getline(first_name, 99);
  cout << "Enter your last name: ";
  cin.getline(last_name, 99);
  strcpy(name, last_name);
  strcpy(&name[strlen(last_name)], ", ");
  strcpy(&name[strlen(last_name) + 2], first_name);
  cout << "Here’s the information in a single string: " << name << endl;

  return 0;
}