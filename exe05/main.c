#include <stdio.h>
#include "functions.h"

int main() {
  char string[1000];
  scanf("%[^\n]", string);
   

  inverte(string);
  
  

  return(0);
}