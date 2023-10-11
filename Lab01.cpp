/*******************************************************
* Степанов Артём Андреевич,ПИ-231
* Share-Link:https://https://onlinegdb.com/CzkaXUPZp
* Тема: Программирование линейных алгоритмов, вариант 1                             
********************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() { 
double dlin, og, pi, g;
    
    cout << "Введите значение длинны: ";
    cin >> dlin;
    
    cout << "Введите значение угла наклона: ";
    cin >> og;
    
    cout << "Введите значение π: ";
    cin >> pi;
    
    cout << "Введите значение ускорения свободного падения(g): ";
    cin >> g;
    cout << "t1 = " << 2 * pi * sqrt(dlin / g) << endl;
    cout << "t2 = " << 2 * pi * sqrt((dlin / g) * (1 + (1 / 16) * pow(og, 2.0))) << endl;
    cout << "t3 = " << 2 * pi * sqrt((dlin / g) * (1 + pow(((1 / 4) * sin(pi)), 2.0) * pow(og, 2.0))) << endl;
    
}
