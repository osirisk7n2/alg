#include <iostream>
#include <fstream>
using namespace std;

#define MAXSIZE 256

int main() {
  int in[MAXSIZE] = {0};
  int ile = 0;
  int min, max;
  int cnt;
  
  ifstream test("in-minmax.txt");
  while (!test.eof())
    test >> in[ile++];  
  test.close();
  
  max = min = in[0]; cnt = 0;
  for(int i = 0; i < ile-1; i++) {
    if(in[i] > max) { max = in[i]; cnt++;};
    if(in[i] < min) { min = in[i]; cnt++;};
  }
  
  cout << cnt << endl;
  return 0;
}
