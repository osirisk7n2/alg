#include <vector>
#include "graphio.cc"
  
class graph {
  vector<int> *inc;
public:
  graph();
  ~graph() { delete[] inc; };
  class Iterator;
};

class graph::Iterator {
  graph &G;
  int v;
  vector<int> *t;
public:
  Iterator(graph &G, int v) : G(G), v(v) { t = NULL; };
  int begin() { vector<int>::iterator it = G.inc[v].begin(); return *it; };
  int next() { vector<int>::iterator it = G.inc[v].begin(); ++it; return *it;  };
  bool end() { return t == NULL; };
};

int main() {
  graphin();
  graph G; graph::Iterator lst (G, 0);

  for (int it = lst.begin(); !lst.end(); lst.next()) ;
  return 0;
} 

graph::graph( ) {
  inc = new vector<int>[E+1];
  for(int i=0; i<E; i++) {
    inc[tab[i][0]].push_back(tab[i][1]);
    inc[tab[i][1]].push_back(tab[i][0]);
  };
};
