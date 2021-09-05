#include <stdio.h>


// Função

float media(float *numeros, int tam) {
  
  float media;
  float soma;
  int i;

  for(i = 0; i < tam ; i++) {
    soma = soma + numeros[i];
  }

  media = soma / i;

  return media;
}

// Teste da Função

int main (void) {

  int t = 5;

  float notas[t];

  printf("Insira a nota de seus %d alunos para calcular sua média:\n",t);

  for(int j = 0; j<t; j++) {
    scanf("%f", &notas[j]);
  }

  printf("A média das notas foi de %.2f\n", media(notas, t));
  return 0;
}