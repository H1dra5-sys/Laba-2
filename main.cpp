/************************
* Автор: Коновалов К.М.*
* Название: Вариант 9  *
************************/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
  double C0,D,pow1,e,c,pow2,C;
  int x,t;
    
  C0 = 5.73;
  t = 3600;
  pow1 = pow(10, -4);
  D = 6 * pow1;
  e = 2.7;
  x = 1;
    
    do {
      pow2 = pow(2.7,  (-x * x) / (4 * D * t));
      C = C0 * pow2;
      cout << "C = " << C << endl;
      cout << "x = " << x << endl;
      x += 1;
    } while (x != 5);
    
      do {
        pow2 = pow(2.7,  (-x * x) / (4 * D * t));
        C = C0 * pow2;
        cout << "C = " << C << endl;
        cout << "x = " << x << endl;
        x += 5;
      } while (x != 30);
    
}