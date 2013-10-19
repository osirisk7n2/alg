#include <iostream> 
#include <list>
#include <fstream>
using namespace std;
  
int main() {
  int V, E;
  V=8; E=7;
  list<pair<int,int> > drzewo;
  ifstream file;
  int **tab = new int *[E];

  for(int i = 0; i < E; ++i )
    tab[i] = new int [2];
  file.open("drzewo.in");
  for(int i=0; i<E; ++i)
    for(int j=0; j<2; ++j)
      file >> tab[i][j];
  file.close();

  for(int i=0; i<E; i++) drzewo.push_back(make_pair(tab[i][0],tab[i][1]));

  for(list<pair<int,int> >::iterator it=drzewo.begin(); it!=drzewo.end(); ++it) cout << it->first << "-" << it->second << " ";
  //delete[] *drzewo;
} 
