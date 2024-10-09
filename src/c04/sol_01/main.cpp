#include <iostream>

int main() {
  using namespace std;
  char first_name[100];
  char last_name[100];
  char grade;
  int age;
  cout << "What is your first name?";
  cin.getline(first_name, 99);
  cout << "What is your last name?";
  cin.getline(last_name, 99);
  cout << "What letter grade do you deserve?";
  cin >> grade;
  grade += 1;
  cout << "What is your age?";
  cin >> age;

  cout << "Name: " << last_name << ", " << first_name << "\n";
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age << endl;

  return 0;
}