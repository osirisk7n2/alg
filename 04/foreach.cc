#include <iostream>
using namespace std;

int main() 
{
  string tab[10] = 
    {
      "Cathy Ball",
      "Randy Crump",
      "Eric Dinehart",
      "Bill Hoffman",
      "Ed Sears",
      "Keith Toleman",
      "Michael Fayette",
      "Irving Gelb",
      "Diane Hollibaugh",
      "Betti Hufford"
    };
  
  for (string napis : tab)
    cout << napis << endl;

  return 0;
}
