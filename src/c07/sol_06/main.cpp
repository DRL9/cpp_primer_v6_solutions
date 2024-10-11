#include <iostream>

using namespace std;
int Fill_array(double arr[], size_t size) {
  cout << "请输入数字: " << endl;
  int count = 0;
  while (count < size && cin >> *arr) {
    arr++;
    count++;
  }
  return count;
}

void Show_array(double arr[], size_t s) {
  cout << "[";
  for (int i = 0; i < s; i++) {
    cout << arr[i];
    if (i < s - 1) {
      cout << ", ";
    }
  }
  cout << "]\n";
}
void Reverse_array(double arr[], size_t len) {
  double tmp;
  for (int i = 0; i < len / 2; i++) {
    tmp = arr[i];
    arr[i] = arr[len - 1 - i];
    arr[len - 1 - i] = tmp;
  }
}

int main() {
  double arr[10];
  size_t len = 10;
  len = Fill_array(arr, len);
  Show_array(arr, len);
  Reverse_array(arr, len);
  Show_array(arr, len);
  double* ptr = arr;
  ptr++;
  Reverse_array(ptr, len - 2);
  Show_array(arr, len);

  return 0;
}