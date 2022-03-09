#include "Line.h"
#include <iostream>
using namespace std;
int main() {
  Point a(3.0,2.0);
  Point b(5.4,2.7);
  Line l(a,b);
  l.print();
  cout << l.lineLength() << endl;
    return 0;
  
}
