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

// Função fatorial

unsigned long long int fatorial(int numero) {

  long int fator;

  for(fator = 1; numero > 1; numero = numero - 1){
    fator = fator * numero;
  }
  
  return fator;
}

// Função par ou impar

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


// Código utilizando funções

int main (void) {

  int n;

  printf("Digite um número a ser processado: \n");

  scanf("%d", &n);

  if( n > 20 ){
    printf("Seu número é maior do que 20 e o programa não pode calcular sua fatorial...\n");
  }
  else {
    printf("A fatorial do seu número é: %lld.\n", fatorial(n));
  }

  if( par(n) ) {
    printf("Seu número é Par.\n");
  } else {
    printf("Seu numero é Impar.\n");
  }

  printf("O seu número invertido corresponde a %d.\n", reverso(n));


  return 0;
}