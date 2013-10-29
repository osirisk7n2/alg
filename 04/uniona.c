#include <iostream>
using namespace std;

struct point {
  string nazwa;
  union {int x; int y;};
  struct point *next;
};

int main() {
  point p1, p2, p3, *it;
  p1.nazwa = "Warszawa";
  p1.x = 1; p1.y = 2;
  p1.next = &p2; p2.next = &p3;

  it = &p1;
  while (it != &p3) it = it->next;

  return 0;
}
