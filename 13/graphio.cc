#include <iostream> 
#include <fstream>
using namespace std;
#define V 7
#define E 10
 
int **tab = new int *[E];

void graphin() {
  ifstream file;
  for(int i = 0; i < E; ++i )
    tab[i] = new int [2];
  file.open("graph.in");
  for(int i=0; i<E; ++i)
    for(int j=0; j<2; ++j)
      file >> tab[i][j];
  file.close();
} 
