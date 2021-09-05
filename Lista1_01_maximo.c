#include <stdio.h>

// A função

int maximo(int a, int b, int c) {

  int maior;

  if(a>b && a>c) {
    maior = a;
  }

  if(b>a && b>c) {
    maior = b;
  }

  if(c>a && c>b) {
    maior = c;
  }

  return maior;
}

/// Testando função

int main(void) {

  int a,b,c;

  printf("Escreva 3 números separados por espaço para a comparação\n");
  scanf("%d %d %d",&a,&b,&c);

  printf("%d",maximo(a,b,c));

}