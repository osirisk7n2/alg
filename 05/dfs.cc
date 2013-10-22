#include <list>
#include "graphio.cc"
  
bool *unvisited;
list<int> *listyinc;

void dfs(int v) {
  unvisited[v] = false;
  for(list<int>::iterator it = listyinc[v].begin(); it != listyinc[v].end(); ++it) {
    int u = *it; 
    if(unvisited[u]) dfs(u);
  }
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

  dfs(1);
  delete[] listyinc, unvisited;
} 
