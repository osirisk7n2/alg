#include <iostream>
#include "distance.h"
using namespace std;

int main()
{
  int a = 7;
  int b = 77;

  cout << DistFuncs::MyDistFuncs::d(a, b) << endl;

  return 0;
}
