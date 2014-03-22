#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<bool> v; 
void sito(int );

int main() {
  sito(1000);

  int count = -2;
  for_each(v.begin(), v.end(), [&count] (bool i) {
      if (i  == true) ++count;
    }); 
  cout << count;

   return 0;
}

void sito(int N) {
  for (int i = 0; i < N; ++i) v.push_back(true);
  for (int i = 2; i < N; ++i)
    if (v[i] != 0)
      for (int j = i; j*i < N; ++j) v[i*j] = false;
}
