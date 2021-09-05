#include <stdio.h>
// Função

int par(int n) {

  typedef enum { false, true } bool;
  bool resultado;

  if(n%2 == 0) {
    resultado = true;
  }
  
  else {
    resultado = false;
  }

  return resultado;
}

// Teste da Função

int main (void) {

  int n;

  printf("Insira um número abaixo:\n");
  scanf("%d", &n);

  printf("Caso ele seja par, o código será executado!\n");

  if( par(n) ) {
    // Insira o código.
    printf("O código seria executado!");
  }
  else{
    printf("O código não seria executado.");
  }


  return 0;
}