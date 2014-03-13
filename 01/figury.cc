/*
#include <iostream>
#include <vector>
using namespace std;

struct Punkt { int x1; int x2; };

class Figura {

public:
  void draw() const;
  void set_color(Color col);
  Color color() const;
  void set_style(line_style sty);
  Line_style style() const;
  Punkt pkt(int i) const;
  int number_of_points() const;
  virtual ~Figura() { }

protected:
  Figura();
  void dodaj(Punkt p);
  void set_punkt(int i, Punkt p);

private:
  vector<Punkt> pkts;
  Color lcolor;
  Line_style ls;
  Color fcolor;

  Figura(const Figura&);
  Figura& operator=(const Figura&);
};
*/

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.H>

class Rysunek : public Fl_Widget // derywacja klasy bazowej
{
  void draw( void );
public:
  Rysunek(int X,int Y,int W,int H) : Fl_Widget(X,Y,W,H) {}
};


int main()
{
  Fl_Window window(300, 300, "Figury");
  Rysunek rysunek(0, 0, 300, 300);
  window.end();
  window.show();
  return Fl::run();
}


void Rysunek::draw(void )
{
  fl_color(FL_BLACK);
  fl_line_style(FL_DASH, 3);
  fl_line(50, 50, 100, 100);
  fl_rect(200, 200, 20, 50);
}
