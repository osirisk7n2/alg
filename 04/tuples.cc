#include <cstdlib>
#include <iostream>
#include <tuple>
using namespace std;

int main() {
  typedef tuple<string, string> daneosobowe;
  daneosobowe tab[10]= {make_tuple("Cathy", "Ball"), make_tuple ("Randy", "Crump")};
}
