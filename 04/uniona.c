#include <stdio.h>
#include <stdlib.h>

int distance(int );
int p[]={1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

int main() {
  printf("%i\n", distance(4));
  return 0;
}

int distance(int n) {
  int dist, i;
  struct point {
    union {int x; int y;};
  };
  struct point *it;

  it = (struct point*) malloc (n*sizeof(struct point));
  dist = 0;

  for (i=0; i<2*n; i+=2) { 
    it->x = p[i]; 
    it->y = p[i+1];
    dist = dist + it->x*it->x + it->y*it->y;
  };

  free (it);

  return dist;
}
