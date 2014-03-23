#include <iostream>
#include <fstream>
using namespace std;

#define MAXSIZE 256
int euc(int , int );

int main() {
  int in[MAXSIZE] = {0};
  int ile = 0;
  
  ifstream test("in.txt");
  while (!test.eof())
    test >> in[ile++];  
  test.close();

  for(int i = 1; i < ile; i=i+2) { 
    cout << euc(in[i], in[i+1]) << " ";
}

  return 0;
}

int euc(int x, int y) {
  int r; int cnt=-1;
  while(r>0) {
    r = x % y; cnt++;
    x = y;
    y = r;
  }
  return cnt;
}
