#include <iostream>
using namespace std;

int main(){
  int a = 10;
  char b = 'A';
  int *p = &a;

  cout << "valor de a: " << a << endl; // el valor de a es 10
  cout << "direccion de a: " << &a << endl; // direcciond de memoria de a (0x62fe1c)
  cout << "valor de b: " << b << endl; // el valor de b es 'A' por que es un char
  cout << "direccion de b: " << &b << endl; // direccion de memoria de b
  cout << "valor de p: " << p << endl; // el valor de p es la direcciónd de memoria de a (0x62fe1c)
  cout << "valor apuntado por p: " << *p << endl; // el valor apuntado por p es 10 (p -> a -> 10)
  cout << "direccion de p: " << &p << endl; // direccion de memoria de p (0x62ce)

  return 0;

}
/*
La stack es una estructura de datos que se utiliza para almacenar variables locales y parámetros de funciones, 
la heap es una estructura de datos que se utiliza para almacenar variables que se crean es volatil y se destruyen en tiempo de ejecución.

int *p = new int;
cuando se declara una variable de tipo puntero a entero p, se crea un espacio de memoria en la stack 
para almacenar la dirección de memoria de un entero, pero no se crea un espacio de memoria para el entero, 
la memomia stack al finalizar la ejecución de la función se libera automaticamente.

*p = 10;
cuando se asigna un valor a la dirección de memoria apuntada por p, se crea un espacio de memoria en la heap, 
si se elimina p no se eliminan los datos a los que apunta, se pierde la dirección de memoria pero los datos 
siguen en la heap ocupando memoria (memory leak).


la sentencia new crea un espacio de memoria en la heap y devuelve la dirección de memoria de ese espacio, 
la memoria heap se borra manualmente con delete.
*/