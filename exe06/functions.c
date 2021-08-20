
#include "functions.h"
#include <stdio.h>
#include <math.h> 
int potencia (int x, int n){

  int resultado;
   
  if(n == 0){
    resultado = 1;
  }
  else{
    resultado = x * potencia(x, n - 1);
  
  }
  return resultado;

}

