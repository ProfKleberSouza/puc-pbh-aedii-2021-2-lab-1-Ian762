
#include "functions.h"
#include <string.h>
#include <stdio.h>

void numero_vogais(char texto[]){
 int v[4];
 for(int j = 0; j < 5; j++){
   v[j] = 0;
 }
 int i;
 for(i = 0; i < strlen(texto); i++){
   if(texto[i] == 65||texto[i] == 97){
     v[0]++;
   }
   else if(texto[i] == 85||texto[i] == 117){
     v[4]++;
   }
   else if(texto[i] == 69||texto[i] == 101){
     v[1]++;
   }
   else if(texto[i] == 73||texto[i] == 105){
     v[2]++;
   }
   else if(texto[i] == 79||texto[i] == 111){
     v[3]++;
   }
   
   
 }
 printf("A = %i", v[0]);
 printf("\nE = %i", v[1]);
 printf("\nI = %i", v[2]);
 printf("\nO = %i", v[3]);
 printf("\nU = %i", v[4]);
}
 


  

    

