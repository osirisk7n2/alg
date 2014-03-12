#include <iostream>
#include <vector>
using namespace std;

struct Punkt { int x1; int x2; };

class Figura {
public:
  void rysuj() const;
  Punkt pkt(int i) const;
  virtual ~Figura() { }
protected:
  Figura();
  void dodaj(Punkt p);
  void set_punkt(int i, Punkt p);
private:
  vector<Punkt> pkts;
  Figura(const Figura&);
  Figura& operator=(const Figura&);
};


int main()
{
    return 0;
}

