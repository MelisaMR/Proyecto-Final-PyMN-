#include <stdio.h>
#include <math.h>
float peso;
float estatura;
float imc;


int main()
{
  printf("Ingrese su peso \n");
  scanf("%f",&peso);
  printf("Ingrese su estatura en metros\n");
  scanf("%f",&estatura);
  imc=peso/pow(estatura,2);
  printf("Se ha calculado que su indice de masa corporal es de %2.2f por lo que ",imc);
if (imc<=18.5) {
  printf("su peso es bajo\n");
}
if (imc>18.5 && imc<=24.9) {
  printf("su peso es normal\n");
}
if (imc>=25 && imc<=29.9) {
  printf("tiene sobrepeso\n");
}
if (imc>=30 && imc<=34.5) {
  printf("tiene obesidad tipo 1\n");
}
if (imc>=35 && imc<=39.9) {
  printf("tiene obesidad tipo 2\n");
}
if (imc>=40) {
  printf("tiene hiperobesidad\n");
}
  return 0;
}
