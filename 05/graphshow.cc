#include <vector>
#include "graphio.cc"

class graph {
  vector<int> *inc;
public:
  graph( );
  ~graph() { delete[] inc; };
  class Iterator;
  friend class Iterator;
};
  
int main() {
  graphin();

  graph G;

  return 0;
} 

graph::graph( ) {
  inc = new vector<int>[E+1];
  for(int i=0; i<E; i++) {
    inc[tab[i][0]].push_back(tab[i][1]);
    inc[tab[i][1]].push_back(tab[i][0]);
  };
};

class graph::Iterator {
  graph &G;
  int v;
  vector<int> *t;
public:
  Iterator(graph &G, int v);
  vector<int> begin() {
    return G.inc[v];
  };
  vector<int> next() {
    return G.inc[v];
  };
  bool end() {
    return t == 0;
  };
};
