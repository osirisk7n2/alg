#include <iostream>
using namespace std;

int tab[]={1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
class points
{
public:
  int n;
  int distance();
  points(int _n) { n = _n; x  = new int[n]; y = new int[n]; }
  ~points(){ delete[] x, y; };
private:
  int dist;
  int *x, *y;
};

int main() {
  points Pkty (4);
  cout << Pkty.distance()<<endl;
  return 0;
}

int points::distance() {
  dist = 0;
  for (int i=0; i<2*n; i+=2) { 
    x[i] = tab[i]; y[i] = tab[i+1];
    dist = dist + x[i]*x[i] + y[i]*y[i];
  };
  return dist;
}
