#include <iostream> 
#include <list>
#include <utility>
#include <fstream>
 
using namespace std;
 
int n;
bool *nowy;
list<int> *listainc;
list<pair<int,int> > x;
  
int main() {
  int V, E;
  V=7; E=10;
  list<int> *listainc = new list<int>[V+1];
  ifstream file;
  int **tab = new int *[E];
  for(int i = 0; i < E; ++i )
    tab[i] = new int [2];
  file.open("listainc.in");
  for(int i=0; i<E; ++i)
    for(int j=0; j<2; ++j)
      file >> tab[i][j];
  file.close();
  for(int i=0; i<E; i++) {
    listainc[tab[i][0]].push_back(tab[i][1]);
    listainc[tab[i][1]].push_back(tab[i][0]);
  }
  delete[] listainc;
} 
