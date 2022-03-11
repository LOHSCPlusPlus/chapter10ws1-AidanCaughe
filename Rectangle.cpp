#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(Line l, Line h){
  Length = l;
  Height = h;
}
void Rectangle::print(){
  cout << "Length: ";
  Length.print();
  cout << "Height: ";
  Height.print();
}
double Rectangle::calcArea(){
  double lengthsize = Length.lineLength();
  double heightsize = Height.lineLength();
  double area = lengthsize * heightsize;
  return area;
}