#include <stdio.h>
#include <math.h>

float a; //cuadrado
float b; // lineal
float c; //independiente
float b2;// b al cuadrado
float ac;
float a4c;
float aa; //denominador 2a
float negB; //b negativa, la del inicio
double raiz;
double draiz; //dentro de la raiz
float arriba1; //numerador
float arriba2; //numerador
float r1; //x1
float r2; //x2

int main() {
  printf("Ingrese el valor de la variable al cuadrado\n");
  scanf("%f", &a);
  printf("Ingrese el valor de la variable lineal\n");
  scanf("%f", &b);
  printf("Ingrese el valor de el termino independiente\n");
  scanf("%f", &c);

  negB=-1*b; //hacer el segundo termino negativo
  b2=pow(b,2); //segundo termino al cuadrado
  ac=a*c; //parte 1 de 4ac
  a4c=ac*4;//parte 2 de 4ac
  draiz=b2-a4c; //dentro de la raiz, b al cuadrado menos 4ac
if (draiz<0) {
  printf("*****E R R O R: LAS SOLUCIONES NO SON REALES*****\n");
} else {
  raiz=sqrt(draiz); //calcular la raiz
  aa=2*a; //sobre dos veces a
  arriba1=negB+raiz; //sí es -b+raiz
  r1=arriba1/aa;
  arriba2=negB-raiz;
  r2=arriba2/aa;

  printf("X1 = %.2f\n",r1);
  printf("X2 = %.2f\n",r2);
}
  return 0;
}
