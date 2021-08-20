#include <stdio.h>
#include <string.h>
#include "functions.h"
void inverte(char texto[]){
  int tamanho;
  tamanho = strlen(texto);
  for(int i = tamanho - 1; i >= 0; i--){
    printf("%c", texto[i]);

  }


}


