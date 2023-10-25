/******************************************************************************
* 
* Степанов Артём Андреевич,ПИ-231
* Share-Link:https://onlinegdb.com/6pWn_QjpyL
* Тема: Обработка массивов, вариант 20
* 
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int Goro[2][2], Amnam1, Amnam2, Badabum1, Badabum2;
    cout << "Введите число для Goro (1,1)" << endl;
    cin >> Goro[0][0];
    cout << "Введите число для Goro (1,2)" << endl;
    cin >> Goro[0][1];
    cout << "Введите число для Goro (2,1)" << endl;
    cin >> Goro[1][0];
    cout << "Введите число для Goro (2,2)" << endl;
    cin >> Goro[1][1];

    if (Goro[0][0]>Goro[1][1]) { 
        Amnam1 = Goro[0][0];
        Badabum1 = Goro[1][1];
    }
    else {
        Amnam1 = Goro[1][1];
        Badabum1 = Goro[0][0];
    }

    if (Goro[0][1]>Goro[1][0]) { 
        Amnam2 = Goro[0][1];
        Badabum2 = Goro[1][0];
    }
    else {
        Amnam2 = Goro[1][0];
        Badabum2 = Goro[0][1];
    }

    for (int jim = 0; jim < 2; jim++) {
        for (int imp = 0; imp < 2; imp++) { 
           cout << Goro[jim][imp] << " ";
        }
        cout << endl;
    }
    cout << "Большее число главной диагонали: " << Amnam1 << endl;
    cout << "Меньшее число главной диагонали: " << Badabum1 << endl;
    cout << "Большее число побочной диагонали: " << Amnam2 << endl;
    cout << "Меньшее число побочной диагонали: " << Badabum2 << endl;
}
