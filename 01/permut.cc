#include <iostream>
using namespace std;

int n;
int *p;
class Permut {  
public:
  static void wypisz(int p[]);
  static void odwrocenie(int ); // odwrocenie ciagu p[1], .., p[n]
  static void generowanie(int ); // funkcja glowna
  static void antyleks(int ); 
};


int main() {
  n = 3;

  Permut::generowanie(n); 

  return 0;
}


void Permut::odwrocenie(int m) {
  int i = 1, j = m;
  while(i<j) {
    swap(p[i], p[j]);
    ++i; --j;
  }
}

void Permut::antyleks(int m) {
  if (m == 1) Permut::wypisz(p); 
  else {
    for (int i=1; i<m+1; ++i) {
      Permut::antyleks(m-1);
      if (i < m) {
	swap(p[i], p[m]);
	Permut::odwrocenie(m-1);
      }
    }
  }
}

void Permut::generowanie(int n ) {
  p = new int[n+1];
  for (int i = 1; i < n+1; ++i) p[i] = i;
  
  Permut::antyleks(n);
  delete[] p;
}

void Permut::wypisz(int p[]) {
  for (int i = 1; i < n+1; ++i) cout << p[i] << ' ';
  cout << '\n';
} 
