#include <iostream>

struct chaff {
  char dross[20];
  int slag;
};

int main() {
  using namespace std;
  char* buffer = new char[300];
  chaff* chaffs = new (buffer) chaff[2];  // new 定位运算符

  strcpy(chaffs[0].dross, "dross1");
  chaffs[0].slag = 1;
  strcpy(chaffs[1].dross, "dross2");
  chaffs[1].slag = 2;

  for (int i = 0; i < 2; i++) {
    cout << "dross: " << chaffs[i].dross << endl;
    cout << "slag: " << chaffs[i].slag << endl;
  }
  delete[] chaffs;

  return 0;
}