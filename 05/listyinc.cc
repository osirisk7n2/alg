#include <iostream> 
#include <list>
#include <utility>
#include <fstream>
using namespace std;
  
int main() {
  int V, E;
  V=7; E=10;
  list<int> *listyinc = new list<int>[V+1];
  ifstream file;
  int **tab = new int *[E];
  for(int i = 0; i < E; ++i )
    tab[i] = new int [2];
  file.open("listyinc.in");
  for(int i=0; i<E; ++i)
    for(int j=0; j<2; ++j)
      file >> tab[i][j];
  file.close();
  for(int i=0; i<E; i++) {
    listyinc[tab[i][0]].push_back(tab[i][1]);
    listyinc[tab[i][1]].push_back(tab[i][0]);
  }
  for(list<int>::iterator it=listyinc[1].begin(); it !=listyinc[1].end(); ++it)
    cout << *it;
  delete[] listyinc;
} 
