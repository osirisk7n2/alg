 #include <list>
#include "graphio.cc"
  
int main() {
  graphin();
  list<int> *listyinc = new list<int>[E+1];

  for(int i=0; i<E; ++i) {
    listyinc[tab[i][0]].push_back(tab[i][1]);
    listyinc[tab[i][1]].push_back(tab[i][0]);
  }
  
  for(int i=1; i<V; ++i) {
    cout<< i <<": "; 
    for(list<int>::iterator it=listyinc[i].begin(); it !=listyinc[i].end(); ++it)
      cout << *it << " ";
    cout << "\n";
  }

  delete[] listyinc;
  return 0;
} 
