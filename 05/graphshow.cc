 #include <vector>
#include "graphio.cc"
  
class graph {
  vector<int> *inc;
public:
  graph();
  ~graph() { delete[] inc; };
  class Iterator;
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

