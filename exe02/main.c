#include <stdio.h>
#include "functions.h"


int main() {
int n;

scanf("%i ", &n);
int v[n];
int i;
int res; 
    // preenche o vetor
    for (i = 0; i < n; i++){
        scanf ("%i", &v[i]);
    }
    
    
    // SAIDA - IMPRIMINDO O RESULTADO
    res = menor(v, n);
    printf("MENOR = %i", res);
  
  return(0);
}