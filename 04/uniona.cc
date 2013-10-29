#include <iostream>
using namespace std;

struct point {
  string nazwa;
  union {int x; int y;};
};

int main() {
  point p;
  p.nazwa = "Warszawa";
  p.x = 1; p.y = 2;
  return 0;
}
