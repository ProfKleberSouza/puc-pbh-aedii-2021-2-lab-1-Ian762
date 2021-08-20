
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){
  
  
  int i;
   for (i = 0; i < n; i++){
      if (v[i] < *menor){
        *menor = v[i];
      }
    }
    for (i = 1; i < n; i++){
      if (v[i] > *maior){
      *maior = v[i];
      }
    }
}
