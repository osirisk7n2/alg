#include <iostream>
#include "distance.h"
using namespace std;

int main()
{
    int x = 3;
    int punkt[] = {88, -2, 5, 10, -11, -1, 9, -88};
    int max=0, idx=0, i;

    for (i=0; i < sizeof(punkt)/sizeof(int); ++i) 
      if (DistFuncs::MyDistFuncs::d(x, punkt[i]) > max) {
	max = DistFuncs::MyDistFuncs::d(x, punkt[i]); 
	idx = i;
      } 

    cout << punkt[idx] << endl;
    return 0;
}
