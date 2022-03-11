#include "Line.h"
class Rectangle{
  public:
  Rectangle(Line l, Line h);
  void print();
  double calcArea();
  private:
  Line Length;
  Line Height;
};