#include <stdio.h>
#include <math.h>
char nombre [20];
int edad;
float peso;
float estatura;
float imc;


int main()
{
  printf("Ingrese su nombre\n");
  scanf("%s",&nombre);
  printf("Ingrese su edad\n");
  scanf("%d",&edad);
  printf("Ingrese su peso \n");
  scanf("%f",&peso);
  printf("Ingrese su estatura en metros\n");
  scanf("%f",&estatura);
  imc=peso/pow(estatura,2);
printf("%s, siendo su edad %d y peso de %3.2f kg, se ha calculado que su indice de masa corporal es de %2.2f \n",nombre,edad,peso,imc);
  return 0;
}
