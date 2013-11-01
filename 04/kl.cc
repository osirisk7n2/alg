#include <iostream>
using namespace std;

class points {
public:
  int n;
  int distance();
  points(int _n, int* _x, int* _y);
  ~points(){ delete[] x, y; };
private:
  int dist;
  int *x, *y;
};

int main() {
  int inx[] = {1, 2, 3, 4, 5, 6, 7};
  int iny[] = {1, 2, 3, 4, 5, 6, 7};
  points Pkty (4, inx, iny);

  cout << Pkty.distance()<<endl;
  return 0;
}

int points::distance() {
  dist = 0;
  for (int i=0; i<n; i++) {
    dist = dist + y[i]*y[i] + x[i]*x[i];
  };
  return dist;
}

points::points(int _n, int *_x, int *_y) { 
  n = _n;   
  x  = new int[n]; y = new int[n];
  for (int i=0; i<n; i++) {
    x[i] = _x[i]; y[i] = _y[i];
  }
}
