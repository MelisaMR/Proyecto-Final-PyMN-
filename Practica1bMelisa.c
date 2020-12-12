#include <stdio.h>
#define g 9.8;
float m;
float w;

int main() {
  printf("Ingrese su masa (peso)\n");
  scanf("%f",&m);
  w=m*g;
  printf("fuerza de atracción de su peso es %f",w);
  return 0;
}
