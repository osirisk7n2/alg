#include "distance.h"
#include <stdexcept>
using namespace std;

namespace DistFuncs
{
  double MyDistFuncs::d(int a, int b)
  {
    if (a-b > 0) return a - b;
    else return b-a;
  }
}
