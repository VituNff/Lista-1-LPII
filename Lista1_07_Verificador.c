#include <stdio.h>

// Função reverter

int reverso(int n) {

  int reverso = 0;

  while(n > 0){

    reverso = reverso * 10; 
    reverso = reverso + (n % 10);
    
    n = n / 10;

  }

  return reverso;
}

// Função digito verificador

int numero(int n) {

  int inv = reverso(n);
  int total = n + inv;
  int p = 5, reverso = 0;


  while( total > 0) {

    reverso = reverso + ( total % 10) * p; 
    total = total / 10;

    p = p - 1;

  }

  reverso = reverso % 10;
  return reverso;

}

// Teste da Função

int main (void) {

  int n;

  printf("Digite sua conta: \n");

  scanf("%d", &n);

  printf("Seu digito verificador é: %d\n", numero(n));

  return 0;
}