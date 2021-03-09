#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char option;
    int n1, n2, respuesta;
    do {
        cout << "\n   MENU CALCULADORA" << endl;
        cout << "     1. Sumar" << endl;
        cout << "     2. Restar"<< endl;
        cout << "     3. Multiplicar"<< endl;
        cout << "     4. Dividir" << endl;
        cout << "     5. Salir\n" << endl;

        do {
            cout << "\n   Eliga la opcion de su preferencia: ";
            cin >> option;
        } while ( option < '1' || option > '5' );

        switch ( option ) {
            case '1': 
              cout << "\n   Introduzca el 1er num: " ;
              cin >> n1;
              cout << "\n   Introduzca el 2do num: " ;
              cin >> n2;
              respuesta = n1 + n2;
              cout <<"\n   " << n1 << " + " << n2 <<" = "<< respuesta;
              break;

            case '2': 
              cout << "\n   Introduzca el 1er num: " ;
              cin >> n1;
              cout << "\n   Introduzca el 2do num: " ;
              cin >> n2;
              respuesta = n1 - n2;
              cout <<"\n   " << n1 << " - " << n2 <<" = "<< respuesta;
              break;

            case '3': 
              cout << "\n   Introduzca el 1er num: " ;
              cin >> n1;
              cout << "\n   Introduzca el 2do num: " ;
              cin >> n2;
              respuesta = n1 * n2;
              cout <<"\n   " << n1 << " * " << n2 <<" = "<< respuesta;
              break;           

            case '4': 
              cout << "\n   Introduzca el 1er num: " ;
              cin >> n1;
              cout << "\n   Introduzca el 2do num: " ;
              cin >> n2;
              if ( n2 != 0 ){
                respuesta = n1 / n2;
                cout <<"\n   " << n1 << " / " << n2 <<" = "<< respuesta;
              }
              else {
                cout << "\n   ERROR \n" ;
              }
        }
    } while ( option != '5' );
    return 0;
}