#include <iostream>
using namespace std;

int n;
int *p;
void (*pobranie)(int[]); // pobranie permutacji
void odwrocenie(int ); // odwrocenie ciagu p[1], .., p[n]
void generowanie(int , void (*f)(int[]) ); 
void antyleks(int ); 
void wypisz(int p[]);


int main() {
  n = 3;
  generowanie(n, wypisz); 
  return 0;
}


void odwrocenie(int m) {
  int i = 1, j = m;
  while(i<j) {
    swap(p[i], p[j]);
    ++i; --j;
  }
}

void antyleks(int m) {
  if (m == 1) pobranie(p); 
  else {
    for (int i=1; i<m+1; ++i) {
      antyleks(m-1);
      if (i < m) {
	swap(p[i], p[m]);
	odwrocenie(m-1);
      }
    }
  }
}

void generowanie(int n, void (*f)(int[])) {
  p = new int[n+1];
  pobranie = f;
  for (int i = 1; i < n+1; ++i) p[i] = i;
  
  antyleks(n);
  delete[] p;
}

void wypisz(int p[]) {
  for (int i = 1; i < n+1; ++i) cout << p[i] << ' ';
  cout << '\n';
} 
