#include <iostream>
using namespace std;

int tab[]={1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
class points
{
public:
  int n;
  int distance();
  ~points(){ delete[] x, y;};
private:
  int dist;
  int *x, *y;
};

int main() {
  points W; W.n = 4;
  cout << W.distance()<<endl;
  return 0;
}

int points::distance() {
  dist = 0;
  x  = new int[n]; y = new int[n];
  for (int i=0; i<2*n; i+=2) { 
    x[i] = tab[i]; y[i] = tab[i+1];
    dist = dist + x[i]*x[i] + y[i]*y[i];
  };
  return dist;
}
