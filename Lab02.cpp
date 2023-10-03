/******************************************************************************
this is variant 20
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   auto M = 500;
   auto q = 90;
   auto u = 18;
   auto e = 2.718;
   int toki[10] {0, 2, 4, 6, 8, 10, 15, 20, 25, 30};
   for(double t : toki){
        auto v = u*(1-pow(e, -((q*t)/M)));
        auto n = 2*(1-(v/u))*(v/u);
        cout << "t=" << t << endl;
        cout << "v=" << v << endl;
        cout << "n=" << n << endl;
    }
}
