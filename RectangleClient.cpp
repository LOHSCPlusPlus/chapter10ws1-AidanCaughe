#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
  Point a(1.0, 2.0);
  Point b(3.5, 6.5);
  Point c(5.0, 4.0);
  Point d(10.0, 20.0);
  Line e(a,b);
  Line f(c,d);
  Rectangle g(e,f);
  g.print();
  cout << g.calcArea() << endl;
    return 0;
}
