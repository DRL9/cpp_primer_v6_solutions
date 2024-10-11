#include <iostream>
struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

using namespace std;
void show_box(box b) {
  cout << "maker: " << b.maker << endl;
  cout << "height: " << b.height << endl;
  cout << "width: " << b.width << endl;
  cout << "length: " << b.length << endl;
  cout << "volume: " << b.volume << endl;
}

void set_volume(box* b) {
  b->volume = b->height * b->width * b->length;
}

int main() {
  box b{
      "wolf",
      1,
      2,
      3,
  };
  set_volume(&b);
  show_box(b);
  return 0;
}