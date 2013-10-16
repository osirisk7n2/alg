#include <stdio.h>
#include <malloc.h>

int *resize(int * , int , int );

int main() {
  int x[] = {3, 2, 3, 1, 2, 4};
  int N = sizeof(x)/sizeof(int);
  int i, count;
  int *y; y = &x[0];

  count = 0;
  for (i=0; i<N; i++)
    if (y[i] != 0) { y[i]--; count++; };
  for (i=0; i<N; i++)
    if (y[i] == 0) y[i] = count;

  if (i+1 > N) {
    y = resize(y, count, N);
    for (i=0; i<N+1; i++) printf("%i ", y[i]);
  }
  return 0;
}

int *resize(int *yy, int count, int N) {
  int i; int *buf;
  buf = (int*)calloc(N+1, sizeof(int));

  for (i=0; i<N; i++) buf[i] = yy[i]; buf[N] = count;
  return buf;
}
