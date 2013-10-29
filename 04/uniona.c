#include <stdio.h>
#define N 10

struct point {
  char *nazwa;
  union {int x; int y;};
  struct point *next;
};
typedef struct point points;

int main() {
  points p[N], *it;

  int i; for(i=0; i<N; ++i) {
    p[i].nazwa = NULL; 
    p[i].x = 0; p[i].y = 0; 
    p[i].next = &p[i+1];
  };
  p[N].next = NULL;

  it = &p[0];
  while (it->next != NULL) it = it->next;

  return 0;
}
