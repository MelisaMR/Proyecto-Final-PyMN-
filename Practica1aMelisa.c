#include <stdio.h>
#include <math.h>
#define pi 3.1416;
int radio;
float volumen;
float r3xpi;

int main()
{
  printf("Ingrese el radio de la esfera\n");
  scanf("%d",&radio);
  r3xpi=pow(radio,3)*pi;
  volumen=r3xpi*1.333;
  printf("el volumen de la esfera es de %f unidades cubicas",volumen);

  return 0;
}
