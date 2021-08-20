#include <stdio.h>
#include "functions.h"

int main() {

  int potencia (int x, int n);
  int a ; // numero
  int b; // potencia
  int resultado;


  scanf("%d %d", &a, &b);
  resultado = potencia(a, b);
  printf("%d", resultado);

    

  return(0);
}