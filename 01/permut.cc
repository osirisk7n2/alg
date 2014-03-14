#include <iostream>
using namespace std;

int n;
int *p;
void generate(int , void (*f)(int[] )); 
void write(int p[]);


int main() {
  n = 3;
  for (int i = 0; i < n; ++i) p[i] = i;
  generate(n, write); 
  return 0;
}


void generate(int n, void (*f)(int[])) {
  int t;
  p = new int[n+1];
  pobierz = f;


  if (n == 1) 
    write(p);

  for (int i = 1; i < n; i++) { 
    swap(p[i], p[n]);
    generate(n-1, f);
    swap(p[i], p[n]);
  }
}

void write(int p[]) {
  for (int i = 1; i < n; ++i) cout << p[i] << ' ';
  cout << '\n';
} 
