#include <iostream>
using namespace std;

/**
 * VELMI ZAKLADNI KALKULACKA
 * C++ je jedno, kolik white space vyuzijeme (mezery, nove radky)
 * vzdy vsak s rozmyslem! (asi se shodneme, ze kod nize by mohl byt formatovan lepe)
 */

int main()
{
    double cislo1, cislo2;
    char operace;

    cout << "Prosim, zadejte cislo k vypoctu: " << endl;
    cin >> cislo1;

    cout <<   "Prosim, zadejte druhe cislo: " << endl;
    cin >> cislo2;

    cout << "Zadejte operaci: " << endl;
    cin >> operace;

    if (         operace == '+') {
        cout << "Soucet je: " << (cislo1 + cislo2) << endl;

    }
    else
    

    
    {
        cout << "Rozdil je: " << (cislo1 - cislo2) << endl;
    }


    return 0;
}
