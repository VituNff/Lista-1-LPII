#include <stdio.h>

// Função

void ordemCrescente(int a, int b, int c) {

  int bfr;

  if ( a < b && b < c ) {
    printf("Ordem Crescente: %d %d %d\n", a, b, c);
  }

  if ( a < b && b > c ) {
    printf("Ordem Crescente: %d %d %d\n", a, c, b);
  }

  if ( b < a && a < c ) {
    printf("Ordem Crescente: %d %d %d\n", b, a, c);
  }

  if ( b < a && a > c ) {
    printf("Ordem Crescente: %d %d %d\n", b, c, a);
  }

  if ( c < a && a < b ) {
    printf("Ordem Crescente: %d %d %d\n", c, a, b);
  }

  if ( c < a && a > b ) {
    printf("Ordem Crescente: %d %d %d\n", c, b, a);
  }
}

// Teste da Função

int main (void) {

  int a, b, c;

  printf("Insira 3 numeros para serem processados \n");
  scanf("%d %d %d", &a , &b , &c);

  ordemCrescente(a,b,c);

  return 0;
}