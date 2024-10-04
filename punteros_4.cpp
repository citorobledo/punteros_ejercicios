#include <stdlib.h>
#include <iostream>

using namespace std;


typedef int* Pint;
typedef char* Pchar;

/*
  Datos: 
    '@' es 64
    'A' es 65
    ...
*/

int main(){

  Pint A, C, F;
  Pint* B;
  Pchar D, E;
  char G;
  int H;

  H = 66;
  G = 'D';
  A = new int;
  F = new int;
  (*A) = 64;
  cout << H << G << (*A) << endl;
  B = &F;
  (*F) = (*A) + H - 62;
  (**B) = (*F) - 2;
  cout << (*F) << (*A) << (**B) << endl;
  D = (Pchar)F;
  E = (Pchar)A;
  C = (*B);
  cout << (*D) << (*C) << (*E) << endl;
  (*C) = (*C) - 63;

  if ((*F) == H) {
    cout << G << H << (*E) << endl;
  }

  while ((*C) > 0) {
    cout << (*E) << (*C) << endl;
    (*C) = (*C) - 1;
    (*F) = (*F) - 1;
    (*A) = 70;
  }

  if ((**B) == (*C)) {
    cout << (*E) << endl;
  }

  delete A;
  delete F;

  return 0;
}
