
#include "functions.h"

int menor(int v[], int n){
  int menos = v[0];
  int i;
   for (i = 0; i < n; i++){
      if (v[i] < menos){
        menos = v[i];
      }
    }
    return menos;
}
