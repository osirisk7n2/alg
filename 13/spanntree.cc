#include <list>
#include "graphio.cc"
  
bool *unvisited;
list<int> *listyinc;
list<pair<int, int> > tree;

void dfsFind(int );
list<pair<int, int> > spannTree() {
  tree.clear();
  return tree;
}

int main() {
  xmpl();
  listyinc = new list<int>[V+1];
  unvisited = new bool[E+1];
  for(int i=0;i<E+1;++i) unvisited[i] = true;

  for(int i=0; i<E; i++) {
    listyinc[tab[i][0]].push_back(tab[i][1]);
    listyinc[tab[i][1]].push_back(tab[i][0]);
  }

  //  dfsFind(1);
  delete[] listyinc, unvisited;
} 

void dfsFind(int v) {
  unvisited[v] = false;
  for(list<int>::iterator it = listyinc[v].begin(); it != listyinc[v].end(); ++it) {
    int u = *it;
    if(unvisited[u]) {
      tree.push_back(make_pair(v, u));
      dfsFind(u);
    }
  }
}
