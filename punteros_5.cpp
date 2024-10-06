#include <stdlib.h>
#include <iostream>

using namespace std;


typedef int* Pint; // Pint ahora representa un puntero a un entero.
typedef char* Pchar; // Pchar ahora representa un puntero a un char.

/*
  Datos: 
    '@' es 64
    'A' es 65
    ...
*/

int main(){

  Pint A, C, F; //Pint A, C, F; reserva espacio en la pila (stack) para tres punteros a enteros.
  Pint* B; // Pint* B; reserva espacio en la pila para un puntero a un puntero a un entero.
  Pchar D, E; // Pchar D, E; reserva espacio en la pila para dos punteros a char.
  char G; // char G; reserva espacio en la pila para un char.
  int H; // int H; reserva espacio en la pila para un entero.

  H = 70;
  G = 'C';
  F = new int;
  (*F) = H;
  C = new int;
  cout << "salida " << *C << endl;
  A = C; // A = C; asigna la dirección de memoria de C a A.
  (*A) = 67; // (*A) = 67; asigna el valor 67 a la dirección de memoria apuntada por A.
  H++;
  cout << "salida B1 " << B << endl;
  cout << (*C) << (*A) << (*F) << endl;// Imprime el valor de las variables C, A y F. 67 67 70
    
  B = &A; // B = &A; asigna la dirección de memoria de A a B.
  D = (Pchar)F; // D = (Pchar)F; asigna la dirección de memoria de F a D y la interpreta como un puntero a char.
  E = (Pchar)(*B);
  cout << "salida B " << **B << "  "<< *C << " " << *A << endl;
  (**B) = (*A) - 63;
  cout << "salida B2 " << **B << "  "<< *C << "  " << *A << endl;

  if ( (*E) != G ) {
    cout << (*A) << (*D) << (*C) << endl; // Imprime el valor de las variables A, D y C. 4 F 4
  }
  
  (*A) = (*A) - (*C) + 66; // (*A) es igual a 4 - 67 + 66 = 3
  cout << (*E) << (*F) << G << endl; // Imprime el valor de las variables E, F y G. B 70 C

  while ((*C) > 0) {
    (*E) = 'E';   
    //cout << (**B) << " " << (*A) << " " << (*C)<< endl;
    (*A) = (*F) - (*C);// (*A) es igual a 70 - 4 = 66
    
    cout << (**B) << endl;
    //cout << (*C) << endl;
    (*C)--;// (*C) es igual a 4 - 1 = 3
    //cout << (*C) << endl;
  }

  delete A;
  delete F;

  return 0;
}

