#include <stdio.h>

// Função

int reverso(int n) {

  int reverso = 0;

  while(n > 0){

    reverso = reverso * 10; 
    reverso = reverso + (n % 10);
    n = n / 10;
    
  }

  return reverso;
}

// Teste da Função

int main (void) {

  int n;

  printf("Escreva um número inteiro para ser invertido!\n");
  scanf("%d", &n);

  printf("%d", reverso(n));

  return 0;
}