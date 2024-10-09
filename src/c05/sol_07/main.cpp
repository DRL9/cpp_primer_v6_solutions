#include <iostream>
#include <string>

int main() {
  using namespace std;
  struct Car {
    string maker;
    int year;
  };

  int car_num;
  cout << "How many cars do you wish to catalog? ";
  cin >> car_num;
  cin.get();

  Car* cars = new Car[car_num];
  for (int i = 0; i < car_num; i++) {
    cout << "Car #" << i + 1 << ":\n";
    cout << "Please enter the make: ";
    getline(cin, cars[i].maker);
    cout << "Please enter year made: ";
    cin >> cars[i].year;
    cin.get();
  }
  cout << "Here is your collection:\n";
  for (int i = 0; i < car_num; i++) {
    cout << cars[i].year << " " << cars[i].maker << endl;
  }

  delete[] cars;

  return 0;
}