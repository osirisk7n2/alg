#include <stdio.h>

int distance();

int main() {
  printf("%i\n", distance());
  return 0;
}

int distance() {
  int dist; int N;
  N = 10;
struct point {
  char *nazwa;
  union {int x; int y;};
  struct point *next;
};
typedef struct point points;

  points p[N], *it;

  int i; for(i=0; i<N; ++i) {
    p[i].nazwa = NULL; 
    p[i].x = 0; p[i].y = 0; 
    p[i].next = &p[i+1];
  };
  p[N].next = NULL; p[N].x = 1;

  it = &p[0];
  while (it->next != NULL) it = it->next;
  dist = p[N].x;
  return dist;
}
