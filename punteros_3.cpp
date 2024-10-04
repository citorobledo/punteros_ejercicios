#include <iostream>
using namespace std;

/*
  Datos: 
    '@' es 64
    'A' es 65
    ...
*/

int* f1(int cant) {
    int *aux = new int[cant]; // Reserva memoria para un arreglo de tipo entero de tamaño cant
    return aux; // Retorna la dirección de memoria del primer elemento del arreglo
}

void f2 (int* &p, int a) {
    p = new int;
    *p = ++a;
    cout << *p <<  (char)a << endl;
}


int main()
{
    const int udp = 7;
    int cant = 2*((udp % 3) + 1);
    int *x, *y, *z; // Declaración de punteros de tipo entero 
    char a = 'A';
    x = f1( cant ); // Reserva memoria para un arreglo de enteros de tamaño cant y asigna la dirección de memoria del primer elemento a x
    for ( int i = 0;  i < cant;  i++ )
        x[ i ] = a + i;
    f2( y, a + cant );
    cout << *y <<  *x << endl;
    z = x++;
    cout << *z << endl;
    *z = *y + 1;
    cout << *z <<  *x <<  *y << endl;
    a = (char)(*y);
    cout << a <<  *z  <<  *x - 1 << endl;
    for ( int i = 0;  i < cant;  i++ )
        cout << *(z + i) ;
    
    // Liberar memoria

    return 0;
}
