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
  vector<int> *it;
public:
  Iterator(graph G, int v) : G(G), v(v) { it = NULL; };
  int begin() { return 0;};
  int next() { return 0; };
  bool end() { return it == NULL; };
};

int main() {
  graphin();
  graph G; graph::Iterator it (G, 0);

  for (int w = it.begin(); !it.end(); it.next()) ;
  return 0;
} 

graph::graph( ) {
  inc = new vector<int>[E+1];
  for(int i=0; i<E; i++) {
    inc[tab[i][0]].push_back(tab[i][1]);
    inc[tab[i][1]].push_back(tab[i][0]);
  };
};
