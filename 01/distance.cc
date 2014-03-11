#include "distance.h"
#include <stdexcept>
using namespace std;

namespace DistFuncs
{
  double MyDistFuncs::d(int a, int b)
  {
    return a - b;
  }
}
