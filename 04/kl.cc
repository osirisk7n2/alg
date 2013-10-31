#include <iostream>
using namespace std;

class points
{
public:
  int distance(int );
private:
  int dist;
  int *x, *y;
};
int tab[]={1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

int main() {
  points p;
  cout << p.distance(4)<<endl;
  return 0;
}

int points::distance(int n) {
  dist = 0;
  x  = new int[n]; y = new int[n];
  for (int i=0; i<2*n; i+=2) { 
    x[i] = tab[i]; y[i] = tab[i+1];
    dist = dist + x[i]*x[i] + y[i]*y[i];
  };
  delete[] x, y;
  return dist;
}
