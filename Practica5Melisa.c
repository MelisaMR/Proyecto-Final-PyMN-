#include <stdio.h>
#include <math.h>

void biseccionT();
void FalsaP_T();
void biseccionL ();
void FalsaP_L();
int it,fun;


int main() {
printf("¿Que funcion desea ejecutar?\n Trigonometrica con biseccion ==>1\n");
printf("Trigonometrica con falsa posicion ==>2\n Logaritmica con biseccion ==>3 \n");
printf("Logaritmica con falsa posicion ==> 4\n");
scanf("%d",&fun);
printf("¿Cuantas iteraciones hará?\n");
scanf("%d",&it );
switch (fun) {
  case 1:
  biseccionT();
  break;
  case 2:
  FalsaP_T();
  break;
  case 3:
  biseccionL();
  break;
  case 4:
  FalsaP_L();
  break;
}
  return 0;
}

void biseccionT () {
float fx,a,b,fA,x,fAx,i;
int itr;
itr=1;
a=-3;
b=-2;
for (i = 0; i < it; i++) {
  fAx=fx*fA;
  x=(a+b)/2;
  fA=((2*a)*cos(2*a))-((a+1)*(a+1));
  fx=((2*x)*cos(2*x))-((x+1)*(x+1));
  printf(" F(a)= %f\n",fA );
  printf("F(x)= %f\n",fx);
  printf("a es %.4f\n b es %.4f\n",a,b );
  fAx=fx*fA;
  printf("f(x) x f(a) = %f \n",fAx);
  if (fAx<0) {
  printf("b=x\n");
  b=x;
  } else {
    printf("a=x= %f\n",x);
  a=x;
  printf ("\n");
  }
  printf("X %d es %f\n",itr,x );
  printf("\n");
  itr=itr+1;
}
}

void FalsaP_T () {
float fx,a,b,fA,x,fAx,i,fB;
int itr;
itr=1;
a=-3;
b=-2;
for (i = 0; i < it; i++) {
  fAx=fx*fA;
  fA=((2*a)*cos(2*a))-((a+1)*(a+1));
  fB=((2*b)*cos(2*b))-((b+1)*(b+1));
  printf(" F(a)= %f\n",fA );
  printf("F(b)= %f\n",fB);
  printf("a es %.4f\n b es %.4f\n",a,b );
  x=b-((fB*(a-b))/(fA-fB));
  fx=((2*x)*cos(2*x))-((x+1)*(x+1));
  fAx=fx*fA;
  printf("f(x) x f(a) = %f \n",fAx);
  if (fAx<0) {
  printf("b=x\n");
  b=x;
  } else {
    printf("a=x= %f\n",x);
  a=x;
  printf ("\n");
  }
  printf("X %d es %f\n",itr,x );
  printf("\n");
  itr=itr+1;
}
}

void biseccionL () {
float fx,a,b,fA,x,fAx,i;
int itr;
itr=1;
a=1;
b=2;
for (i = 0; i < it; i++) {
  fAx=fx*fA;
  x=(a+b)/2;
  fA=log(fabs(a))+(a*a)-4 ;
  fx=log(fabs(x))+(x*x)-4 ;
  printf(" F(a)= %f\n",fA );
  printf("F(x)= %f\n",fx);
  printf("a es %.4f\n b es %.4f\n",a,b );
  fAx=fx*fA;
  printf("f(x) x f(a) = %f \n",fAx);
  if (fAx<0) {
  printf("b=x\n");
  b=x;
  } else {
    printf("a=x= %f\n",x);
  a=x;
  printf ("\n");
  }
  printf("X %d es %f\n",itr,x );
  printf("\n");
  itr=itr+1;
}
}

void FalsaP_L () {
float fx,a,b,fA,x,fAx,i,fB;
int itr;
itr=1;
a=-3;
b=-2;
for (i = 0; i < it; i++) {
  fAx=fx*fA;
  fA=log(fabs(a))+(a*a)-4 ;
  fB=log(fabs(b))+(b*b)-4 ;
  printf(" F(a)= %f\n",fA );
  printf("F(b)= %f\n",fB);
  printf("a es %.4f\n b es %.4f\n",a,b );
  x=b-((fB*(a-b))/(fA-fB));
  fx=log(fabs(x))+(x*x)-4 ;
  fAx=fx*fA;
  printf("f(x) x f(a) = %f \n",fAx);
  if (fAx<0) {
  printf("b=x\n");
  b=x;
  } else {
    printf("a=x= %f\n",x);
  a=x;
  printf ("\n");
  }
  printf("X %d es %f\n",itr,x );
  printf("\n");
  itr=itr+1;
}
}
