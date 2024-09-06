#include <stdio.h>

int main(void) {
  int indice = 13;
  int k = 0;
  int soma = 0;

  while(k<indice){
    k = k+1;
    soma = soma + k;
  }
  
  printf("%d", soma);
  return 0;
}

//O resultado é 91!