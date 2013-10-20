#include <iostream>
#include <list>
#include <queue>
using namespace std;

typedef list<char*, allocator<char*> > charlist;

int main() 
{
        int i;  
    queue<char*, charlist> q;      
        char *tab[10] = 
    {
      {"Cathy Ball"},
      {"Randy Crump"},
      {"Eric Dinehart"},
      {"Bill Hoffman"},
      {"Ed Sears"},
      {"Keith Toleman"},
      {"Michael Fayette"},
      {"Irving Gelb"},
      {"Diane Hollibaugh"},
      {"Betti Hufford"}
    };
        
	for (i = 0; i < 10; i++) q.push(tab[i]);
        while (!q.empty()) {
                cout << q.front() << endl;
        q.pop();
	}
        return 0;
}
