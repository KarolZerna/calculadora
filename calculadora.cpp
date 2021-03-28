#include <iostream>
#include <stdio.h>
using namespace std;

void mostrarMenu(){
  cout << "\n   MENU CALCULADORA" << endl;
  cout << "     1. Sumar" << endl;
  cout << "     2. Restar"<< endl;
  cout << "     3. Multiplicar"<< endl;
  cout << "     4. Dividir" << endl;
  cout << "     5. Salir\n" << endl;
}
char elegirOpcion(){
  char option;
  do {
          cout << "\n   Eliga la opcion de su preferencia: ";
          cin >> option;
  } while ( option < '1' || option > '5' );
  return option;
}

void ingresarNumeros(int *numero1, int *numero2){
  cout << "\n   Introduzca el 1er num: " ;
  cin >> *numero1;
  cout << "\n   Introduzca el 2do num: " ;
  cin >> *numero2;
}
void mostrarRespuesta(int numero1, int numero2, int respuesta,char operacion){
  cout <<"\n   " << numero1 << operacion << numero2 <<" = "<< respuesta;
}
void mostrarError(){
  cout <<"\n ERROR \n";
}
int main(){
    char option;
    int numero1, numero2, respuesta;
    do {
      mostrarMenu();
      option=elegirOpcion();
      switch ( option ) {
          case '1':
            ingresarNumeros(&numero1,&numero2);
            respuesta = numero1 + numero2;
            mostrarRespuesta(numero1,numero2,respuesta,'+');
            break;

          case '2':
            ingresarNumeros(&numero1,&numero2);
            respuesta = numero1 - numero2;
            mostrarRespuesta(numero1,numero2,respuesta,'-');
            break;

          case '3':
            ingresarNumeros(&numero1,&numero2);
            respuesta = numero1 * numero2;
            mostrarRespuesta(numero1,numero2,respuesta,'*');
            break;

          case '4':
            ingresarNumeros(&numero1,&numero2);
            numero2 != 0 ? mostrarRespuesta(numero1,numero2,respuesta=numero1/numero2,'/') : mostrarError();
      }
    } while ( option != '5' );
    return 0;
}
