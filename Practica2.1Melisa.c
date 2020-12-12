#include <stdio.h>
int numero;

int main() {
  printf("Ingrese un numero entero y positivo\n");
  scanf("%d",&numero);

  printf("El numero es\n");
  printf("drum roll, please\n");
  printf("................\n");

  if (numero%2==0) {

    printf("P A R\n");
  }
  else {

    printf("I M P A R\n");
  }
  return 0;
}
