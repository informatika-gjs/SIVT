/**
 * Zjistěte, co je to tzv. HTTP response status code. 
 * 
 * Vaším úkolem bude napsat program, který podle zadaného kódu 
 * vypíše příslušný stav. 
 * 
 * Pokud bude kód mimo rozsah, vypíše se chybová hláška. 
 */

#include <iostream>
using namespace std;

int main()
{
    int code; 

    cout << "HTTP kod (100-599): ";
    
    if( !(cin >> code) )
        return 1;

    string cat;

    switch( code / 100 ) {
        case 1: 
            cat="Informational (1xx)"; 
            break;
        case 2: 
            cat="Success (2xx)"; 
            break;
        case 3: 
            cat="Redirection (3xx)"; 
            break;
        case 4: 
            cat="Client Error (4xx)"; 
            break;
        case 5: 
            cat="Server Error (5xx)"; 
            break;
        default: 
            cat="Mimo rozsah"; 
    }
    cout << cat << endl;
}
