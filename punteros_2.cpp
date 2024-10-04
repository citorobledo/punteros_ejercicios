#include <iostream>
using namespace std;

/*
  Datos: 
    '@' es 64
    'A' es 65
    ...
*/

// int *p;  declara un puntero de tipo entero
// int *p = new int;  declara un puntero de tipo entero y reserva memoria para un entero
// int *p = new int[10];  declara un puntero de tipo entero y reserva memoria para un arreglo de 10 enteros

// *p  accede a la primera posición de un arreglo
// p++ avanza el puntero a la siguiente posición
// p-- retrocede el puntero a la posición anterior
// p = p + n avanza el puntero n posiciones

/*
no se puede asignar de maner explicita un puntero a una variable.
int *p = 1144A32315;  // incorrecto
podemos utilizar la dirección el operador & para obtener la dirección de una variable & hace referencia a la dirección de memoria de la variable
int *p = &a;  // correcto

el operador * tiene distinta funcionalidad dependiendo de donde se utilice en la declaración de una variable * indica que la variable 
es un puntero, 
en una operación * indica que se quiere acceder al valor de la variable a la que apunta el puntero.
*/

/*
Una variable adecuada para guardar direcciones es un puntero, por lo tanto la instrucción correcta es:
int * p = new int ;
De esta forma p guarda la dirección de esa variable anónima y puede acceder mediante el operador * para guardar / recuperar valores. 
*/

// liberar memoria con delete p;
// liberar memoria de todo un bloque con delete [] p;


int* f1(int cant) {
    return new int[cant];
}

void f2 (int* &p, int a) {
    p = new int;
    *p = a++;
    cout << *p << " " << (char)a << endl;
}


int main()
{
    int udp = 7;
    int cant = (udp % 3) + 2;
    int *x, *y, *z;
    char a = 'A';
    x = f1(cant);
    for (int i=0; i<cant; i++ ){
        //cout << x[i] << " " << endl; // imprime basura
        x[i] = a + i;
    }

    f2( y, a+cant );
    cout << *y << " "<< *x << endl;
    z = x++;
    cout << *z << endl;
    *z = *y + 1;
    cout << *z << " " << *(x-1) << " "<< *y << endl;
    a = (char)(*y);
    cout << a << " "<< *z <<" " <<  *x - 1 << endl;
    for ( int i = 0;  i < cant;  i++ )
        cout << *(z+i)+i<<" " ;

    // Liberar memoria
    delete x, y, z;

    return 0;
}



