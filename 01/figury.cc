// #include <iostream>
// #include <vector>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.H>
// using namespace std;

/*
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
*/

class Rysunek : public Fl_Widget
{
  void draw( void );
public:
  Rysunek(int X,int Y,int W,int H) : Fl_Widget(X,Y,W,H) {}
};


int main()
{
  Fl_Window window(300, 300, "Rysowanie");
  Rysunek rysunek(0, 0, 300, 300);
  window.end();
  window.show();
  return Fl::run();
}


void Rysunek::draw( void )
{
  fl_color( FL_BLACK );
  fl_line_style( FL_DASH, 3 );
  fl_line( 50, 50, 100, 100 );
  fl_rect( 200, 200, 20, 50 );
}
