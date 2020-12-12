#include <stdio.h>
#include<math.h>
void Derivadas();
float xi,h,er,d;
int m;
int main(){
  d=.24893534184;
  printf("Derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n");
  printf("h=.5  --->1\nh=.2  --->2\nh=.1  --->3\nh=.01 --->4\n");
  scanf ("%d",&m);
  switch (m){
  case 1:xi=0.6; h=0.5;break;
  case 2:h=.2;xi=.6;break;
  case 3:h=.1;xi=.6;break;
  case 4:h=.01;xi=.6;break;}
  Derivadas();}
void Derivadas(){
    float fxi, fxims1, fxims2, dfxi, fximn1, fximn2,dfxiat, dfxiad,dfxic;
    fxi = 1-exp(-xi/.2); //Evaluando la funcion en xi f(xi)
    fxims1 = 1-exp(-(xi+h)/.2); // Evaluando f(xi+1)
    fxims2 = 1-exp(-(xi+(2*h))/.2); //Evaluando f(xi+2)
    dfxiad = (-fxims2+4*fxims1-(3*fxi))/(2*h);
    printf("Diferenciación hacia adelante = %f\n",dfxiad);
    er=(fabs((dfxiad-d)/d))*100;
    printf("error = %f%%\n",er );

    fximn1 = 1-exp(-(xi-h)/.2); // Evaluando f(xi-1)
    fximn2 = 1-exp(-(xi-(2*h))/.2); //Evaluando f(xi-2)
    dfxiat = ((3*fxi)-(4*fximn1)+fximn2)/(2*h);
    printf("Diferenciación hacia atrás = %f\n",dfxiat);
    er=(fabs((dfxiat-d)/d))*100;
    printf("error = %f%%\n",er );

    dfxic=(-fxims2+(8*fxims1)-(8*fximn1)+fximn2)/(12*h);
    printf("Diferenciación centrada = %f\n",dfxic);
    er=(fabs((dfxic-d)/d))*100;
    printf("error = %f%%\n",er );
    return 0;
  }
