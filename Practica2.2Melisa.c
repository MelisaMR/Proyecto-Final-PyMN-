#include <stdio.h>
int edad;

int main() {
  printf("Ingrese su edad\n");
  scanf("%d",&edad);

  if (edad<18) {
    printf("Tu edad es de %d años, por lo que eres menor de edad\n",edad);
  } else {
    printf("Tu edad es de %d años, por lo que eres mayor de edad\n",edad);
  }
  return 0;
}
