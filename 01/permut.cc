#include <iostream>
using namespace std;

class Permutacja { 
public:
  int n;
  int *p;

  Permutacja(int m) {
    n = m;
    p = new int[n+1];
    for (int i = 1; i < n+1; ++i) p[i] = i;
  };
  ~Permutacja() { delete[] p; };

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
	antyleks(m-1);
	if (i < m) {
	  swap(p[i], p[m]);
	  odwrocenie(m-1); }
      }
    }
  };  
};


int main() {
  Permutacja rho(3); 
  
  rho.generowanie(); 
  return 0;
}
