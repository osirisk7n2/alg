#include <iostream>
#include <tuple>
using namespace std;

int main() {
  typedef tuple<string, string> daneosobowe;
  daneosobowe tab[2]= {make_tuple("Cathy", "Ball"), make_tuple("Randy", "Crump")};
  cout << get<0>(tab[1]) << " " << get<1>(tab[1]) << endl;
}
