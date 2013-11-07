#include <list>
#include "graphio.cc"

class graph {
  list<int> *listyinc;
public:
  graph( );
  ~graph() { delete[] listyinc; };
  void print();
};
  
int main() {
  graphin();

  graph G;
  G.print();

  return 0;
} 

graph::graph( ) {
  listyinc = new list<int>[E+1];
  for(int i=0; i<E; i++) {
    listyinc[tab[i][0]].push_back(tab[i][1]);
    listyinc[tab[i][1]].push_back(tab[i][0]);
  };
}

void graph::print() {
  for(int i=1; i<E; ++i) {
    cout<< i <<": ";
    for(list<int>::iterator it=listyinc[i].begin(); it !=listyinc[i].end(); ++it)
      cout << *it << " ";
    cout << "\n";
  }
}
