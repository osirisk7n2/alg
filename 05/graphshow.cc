#include <iostream> 
#include <list>
#include <fstream>
#include "adt.cc"
#define V 8
#define E 7
using namespace std;

list<int> *listyinc = new list<int>[V+1];

int main() {
  ifstream file;
  int **tab = new int *[E];
  graph G;
  
  for(int i = 0; i < E; ++i )
    tab[i] = new int [2];
  file.open("graph.in");
  for(int i=0; i<E; ++i)
    for(int j=0; j<2; ++j)
      file >> tab[i][j];
  file.close();
  
  for(int i=0; i<E; i++) 
    G.put(tab[i][0], tab[i][1]);

  G.print();

  return 0;
} 

void graph::put(int v, int w) {
  listyinc[v].push_back(w);
  listyinc[w].push_back(v);
};

void graph::print() {
  for(int i=1; i<V; ++i) {
    cout<< i <<": "; 
    for(list<int>::iterator it=listyinc[i].begin(); it !=listyinc[i].end(); ++it)
      cout << *it << " ";
    cout << "\n";
  }
}
