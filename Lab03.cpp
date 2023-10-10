/*******************************************************
* 
* Степанов Артём Андреевич,ПИ-231
* Share-Link:https://onlinegdb.com/dfybpmZZl
* Тема: Циклы с ветвлением, вариант 20
* 
********************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int acu = 40;
  int L = 15;
  auto g = 9.8;
  double a;
  a = 3.5 * pow(10, -3);
  double vi[5] = {1.0, 2.0, 5.0, 7.0, 10.0};
  for (double v: vi){
      double Gr;
      Gr = (acu / 273.0) * ( (g * pow(L, 3) ) / pow(v, 2) );
      double Pr;
      Pr = v / a;
      double CAM;
      CAM = Gr * Pr;
      // Если выражение Gr * Pr < 2*10**7
      if ( (Gr * Pr) < 2 * pow(10, 7) ) {
          double Nu;
          Nu = 0.54 * pow(CAM, 0.25);
          cout << Gr << endl;
          cout << Pr << endl;
          cout << Nu << endl;
      }
      // Если выражение Gr * Pr > 2*10**7
      else if ( (Gr * Pr) > 2 * pow(10, 7) ) {
          double Nu;
          Nu = 0.135 * pow(CAM, 0.33);
          cout << Gr << endl;
          cout << Pr << endl;
          cout << Nu << endl;
      }
      
  }
}
