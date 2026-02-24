/**
 * Napište jednoduchý klasifikátor IPv4 adres. 
 * 
 * Program na začátku načte IPv4 adresu (čtyři čísla, pro jednoduchost bez tečky).
 * Pozn.: pokud se nepodaří načíst čtyři čísla, program 
 * vypíše "Invalid input! Ending program..." a skončí. 
 * 
 * Následně bude mít za úkol vypsat IP adresu společně s její třídou a typem.
 * 
 * Pro třídu platí: 
 * 
 * - první oktet v rozsahu 1   až 127 -> třída A
 * - první oktet v rozsahu 128 až 191 -> třída B
 * - první oktet v rozsahu 192 až 223 -> třída C
 * - první oktet v rozsahu 224 až 239 -> třída D
 * - první oktet v rozsahu 240 až 255 -> třída E
 * 
 * Pro typ adresy platí  následující: 
 * 
 * - 10.0.0.0     až  10.255.255.255  -> private
 * - 172.16.0.0   až  172.31.255.255  -> private
 * - 192.168.0.0  až  192.168.255.255 -> private 
 * - 127.0.0.0    až  127.255.255.255 -> loopback
 * - 169.254.0.0  až  169.254.255.255 -> link-local
 * - 224.0.0.0    až  239.255.255.255 -> multicast
 * - vše ostatní                      -> public
 * 
 * Ukázka výstupu 1: 
 * 
 * Enter IPv4 (4 octets 0-255): 192 168 0 0
 * -------------------------------------------
 * IPv4: 192.168.0.0
 * Class: C
 * Type: private
 * -------------------------------------------
 * 
 * 
 * Ukázka výstupu 2:
 * 
 * Enter IPv4 (4 octets 0-255): 14 255 255 255
 * -------------------------------------------
 * IPv4: 14.255.255.255
 * Class: A
 * Type: public
 * -------------------------------------------
 * 
 * 
 * Ukázka výstupu 3:
 * 
 * Enter IPv4 (4 octets 0-255): 226 0 0 0
 * -------------------------------------------
 * IPv4: 226.0.0.0
 * Class: D
 * Type: multicast
 * -------------------------------------------
 * 
 * 
 * Ukázka výstupu 4:
 * 
 * Enter IPv4 (4 octets 0-255): 57 5 45 t
 * Invalid input! Ending program...
 */
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter IPv4 (4 octets 0-255): ";
    if ( !(cin >> a >> b >> c >> d) ) {
        cout << "Invalid input! Ending program..." << endl;
        return -1;
    }

    // IPV4 class
    string ip_class;
    if ( 1 <= a && a <= 127 ) 
        ip_class = "A";
    else if ( 128 <= a && a <= 191 ) 
        ip_class = "B";
    else if ( 192 <= a && a <= 223 ) 
        ip_class = "C";
    else if ( 224 <= a && a <= 239 ) 
        ip_class = "D";
    else if ( 240 <= a && a <= 254 ) 
        ip_class = "E";
    else 
        ip_class = "(special)";

    // type
    string typ = "public";

    if ( a == 10 ) 
        typ="private";
    else if ( a == 172 && (16 <= b && b <= 31) ) 
        typ="private";
    else if ( a == 192 && b == 168 ) 
        typ="private";
    else if ( a == 127 ) 
        typ="loopback";
    else if ( a == 169 && b == 254 ) 
        typ="link-local";
    else if ( 224 <= a && a <= 239 ) 
        typ="multicast";

    cout << "-------------------------------------------" << endl;
    cout << "IPv4: " << a << "." << b << "." << c << "." << d << endl;
    cout << "Class: " << ip_class  << endl;
    cout << "Type: " << typ << endl;
    cout << "-------------------------------------------" << endl;
}
