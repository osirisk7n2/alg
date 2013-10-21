#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

typedef char node;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {node t = A; A = B; B = t;}

int partition(vector<node> &, int, int);
void qsort(vector<node> &, int, int);

int main() {
  string s = "SORTOWANI";
  vector<node> v;
  v.push_back('E');

  for(int i=0; i<9; i++) v.insert(v.begin()+i, s[i]);
  copy(v.begin(), v.end(), ostream_iterator<char>(cout, " ")); cout << endl;

  qsort(v, 0, v.size());
  copy(v.begin(), v.end(), ostream_iterator<char>(cout, " ")); cout << endl;

  return 0;
}

int partition(vector<node>& v, int le, int ri) {
  int i = le-1, j = ri;
  node vi = v[ri];
  for (;;) {
    while (less(v[++i], vi)) ;
    while (less(vi, v[--j]))
      if (j == le) break;
    if (i >= j) break;
    exch(v[i], v[j]);
  }
  exch(v[i], v[ri]);
  return i;
}

void qsort(vector<node>& v, int le, int ri) {
  int pivot;
  if (ri <= le) return ;
  pivot = partition(v, le, ri);
  qsort(v, le, pivot-1);
  qsort(v, pivot+1, ri);
}
