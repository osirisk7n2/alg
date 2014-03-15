#include <iostream>
using namespace std;

class Permutacja { 
public:
  int n;
  int *p;

  Permut() {
    p = new int[n+1];
    for (int i = 1; i < n+1; ++i) p[i] = i;
  };
  ~Permut() { delete[] p; };

  void wypisz() {
    for (int i = 1; i < n+1; ++i) cout << p[i] << ' ';
    cout << '\n';
  }; 
  void odwrocenie(int m) {
    int i = 1, j = m;
    while(i < j) {
      swap(p[i], p[j]);
      ++i; --j;
    }
  };
  void generowanie() {
    antyleks(n);
  }
  void antyleks(int m) {
    if (m == 1) wypisz(); 
    else {
      for (int i=1; i < m+1; ++i) {
	Permut::antyleks(m-1);
	if (i < m) {
	  swap(p[i], p[m]);
	  odwrocenie(m-1); }
      }
    }
  };  
};


int main() {
  Permutacja ro; 
  ro.n = 3;

  ro.generowanie(); 
  
  return 0;
}
