#include <list>
#include "graphio.cc"
  
bool *unvisited;
list<int> *listyinc;
list<pair<int, int> > tree;

void dfs(int v) {
  unvisited[v] = false;
  for(list<int>::iterator it = listyinc[v].begin(); it != listyinc[v].end(); ++\
	it) {
    int u = *it;
    if(unvisited[u]) {
      tree.push_back(make_pair(v, u));
      dfs(u);
    }
  }
}

int main() {
  xmpl();
  listyinc = new list<int>[V+1];
  unvisited = new bool[E+1];

  for(int i=0; i<E; i++) {
    listyinc[tab[i][0]].push_back(tab[i][1]);
    listyinc[tab[i][1]].push_back(tab[i][0]);
  }

  for(int i=0;i<E+1;++i) unvisited[i] = true;
  tree.clear();
  dfs(1);
  for(list<pair<int, int> >::iterator it=tree.begin(); it!=tree.end(); ++it)
	cout<<it->first<<"-"<<it->second<<" ";

  delete[] listyinc, unvisited, tab;
} 

