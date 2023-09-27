#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    double dlin = 0.994;
    int og = 50;
    double pi = 3.14;
    double g = 9.8;
    double t1 = 2 * pi * sqrt(dlin/g);
    double t2 = 2 * pi * sqrt((dlin/g)*(1+(1/16)*pow(og,2.0)));
    double t2 = 2 * pi * sqrt((dlin/g)*(1+pow(((1/4)sinf),2.0)*pow(og,2.0)));
    cout << t1 << endl;
    cout << t2 << endl;
    
    
}
