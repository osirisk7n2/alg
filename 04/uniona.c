#include <stdio.h>
#include <stdlib.h>

int distance(int n, int* _x, int* _y );

int main() {
  int x[] = {1, 2, 3, 4, 5, 6};
  int y[] = {1, 2, 3, 4, 5, 6};
  printf("%i\n", distance(4, x, y));
  return 0;
}

int distance(int n, int* _x, int* _y) {
  int dist, i;
  struct point {
    union {int x; int y;};
  };
  struct point *it;

  it = (struct point*) malloc (n*sizeof(struct point));
  dist = 0;

  for (i=0; i<n; i++) { 
    it->x = _x[i]; 
    it->y = _y[i];
    dist = dist + it->x*it->x + it->y*it->y;
  };

  free (it);

  return dist;
}
