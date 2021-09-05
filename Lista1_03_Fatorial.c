#include <stdio.h>


// Função

int fatorial(int numero) {

  int fator;

  for(fator = 1; numero > 1; numero = numero - 1){
    fator = fator * numero;
  }
  
  return fator;
}

// Teste da Função

int main (void) {

  int n;

  printf("Insira o numero a ser processado: \n");
  scanf("%d", &n);

  printf("Resultado: %d", fatorial(n));

  return 0;
}