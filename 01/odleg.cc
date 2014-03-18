#include <iostream>
#include "distance.h"
using namespace std;

int main()
{
  int x = 3; // ustalony punkt poczatkowy
    int punkt[] = {94, -2, 5, 10, -11, -1, 9, -88};
    int i, max;
    int idx[2]; // dwa rozwiazania
    max = 0;

    for (i=0; i < sizeof(punkt)/sizeof(int); ++i) // dla znalezienia max 
      if (DistFuncs::MyDistFuncs::d(x, punkt[i]) > max) {
	max = DistFuncs::MyDistFuncs::d(x, punkt[i]); 
	idx[0] = i;
      }; 
    for (i=0; i < sizeof(punkt)/sizeof(int); ++i) // drugie rozwiazaniex
      if (DistFuncs::MyDistFuncs::d(x, punkt[i]) == max) 
	idx[1] = i;

    cout << punkt[idx[0]] << ' ' << punkt[idx[1]] << endl;
    return 0;
}
