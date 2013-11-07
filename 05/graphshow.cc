 #include <vector>
#include "graphio.cc"
  

class graph {
  vector<int> *inc;
public:
  graph();
  ~graph() { delete[] inc; };
  void print();
};


int main() {
  graphin();
  graph G;

  G.print();
  return 0;
} 


graph::graph( ) {
  inc = new vector<int>[E+1];
  for(int i=0; i<E; i++) {
    inc[tab[i][0]].push_back(tab[i][1]);
    inc[tab[i][1]].push_back(tab[i][0]);
  };
};

void graph::print() {
  for(int i=1; i<V; ++i) {
    cout<< i <<": ";
    for(vector<int>::iterator it=inc[i].begin(); it !=inc[i].end(); ++it)
      cout << *it << " ";
    cout << "\n";
  }
}
