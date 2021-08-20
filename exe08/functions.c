
#include "functions.h"
#include <stdio.h>
#include <string.h>

_Bool is_palindromo(char texto[]) {

  int tamanho = strlen(texto);
  int resultado;
  
  

  if(tamanho == 1){
    printf("SIM");
  }
  else if(texto[0] != texto[tamanho - 1]){
    printf("NAO");
    
  }
  else if(texto[1] == texto[tamanho - 2]){

    printf("SIM");

    
    
    
  }


  }
  // texto[i] = palavra invertida.




