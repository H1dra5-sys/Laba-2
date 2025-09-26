/************************
* Автор: Коновалов К.М.*
* Название: Вариант 9  *
************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
  double C0, D, e, pow2, C;
  int x, t, step1, step2, lim1, lim2;
    
  C0 = 5.73;
  t = 3600;
  D = 6.0 * pow(10.0,-4.0);
  e = 2.7;
  x = 1;
  step1 = 1;
  step2 = 5;
  lim1 = 5;
  lim2 = 30;
    
    do {
      pow2 = pow(e,  (-x * x) / (4.0 * D * t));
      C = C0 * pow2;
      cout << "C = " << C << endl
      << "x = " << x << endl;
      x += step1;
    } while (x < lim1);
    
      do {
        pow2 = pow(e,  (-x * x) / (4.0 * D * t));
        C = C0 * pow2;
        cout << "C = " << C << endl
        << "x = " << x << endl;
        x += step2;
      } while (x < lim2);
    
}