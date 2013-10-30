#include <stdio.h>
#include <stdlib.h>

int distance(int );

int main() {
  printf("%i\n", distance(10));
  return 0;
}

int distance(int N) {
  int dist;
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
  
  it = &p[0]; dist = 0;
  while (it->next != NULL) {
    dist = dist + it->x;
    it = it->next;
  }
  //free (&p);
  return dist;
}
