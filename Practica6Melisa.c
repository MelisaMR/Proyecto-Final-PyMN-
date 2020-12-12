#include <stdio.h>
#include<math.h>
float fx(float x);
float dfx(float x);
float f2x(float x);
float d2fx(float x);
float x, xi;
int i,m;
float Xi[5];
float errR[5];
float x0, xm1,x1,x2,x3,x4,x5,e1,e2,e3,e4,e5;

int main(){
  printf("Newton-Rapson Exponencial==>1\nNewton-Rapson Polinomial===>2\n");
  printf("Secante Exponencial==>4\nSecantePolinomial===>3\n");
  scanf("%d",&m);
  switch (m) {
    case 1:
   printf("**NEWTON-RAPSON EXPONENCIAL** \n");
    printf("valor inicial x0=0.3\n");
    x =0.3;
    for (i = 0; i<5; i++) {
      xi = x - (fx(x)/dfx(x));
      Xi[i]=xi;
      printf("La raiz estimada es x%d=%2.5f\n",i+1,Xi[i]);
      errR[i]=fabs((Xi[i]-Xi[i-1])/Xi[i])*100;
      printf("error relativo es %.5f %%\n\n",errR[i]);
      x=xi;
    }
    break;
    case 2:
    printf("**NEWTON-RAPSON POLINOMIAL** \n");
    printf("valor inicial x0=0.3\n");
    x =0.3;
    for (i = 0; i<5; i++) {
      xi = x - (f2x(x)/d2fx(x));
      Xi[i]=xi;
      printf("La raiz estimada es x%d=%2.5f\n",i+1,Xi[i]);
      errR[i]=fabs((Xi[i]-Xi[i-1])/Xi[i])*100;
      printf("error relativo es %.5f %%\n\n",errR[i]);
      x=xi;
    }
    break;
    case 3:
    printf("**SECANTE POLINOMIAL** \n");
    printf("valor inicial x-1=3   x0=-4\n");
    x0 =-4;
    xm1=3;
    x1 = x0 -((f2x(x0)-(xm1-x0))/(f2x(xm1)-f2x(x0)));
    e1=(fabs((x1-x0)/x1))*100;
    printf("x1=%f\n error=%f\n",x1,e1 );
    x2 = x1 -((f2x(x1)-(x0-x1))/(f2x(x0)-f2x(x1)));
    e2=(fabs((x2-x1)/x2))*100;
    printf("x2=%f\n error=%f\n",x2,e2 );
    x3 = x2 -((f2x(x2)-(x1-x2))/(f2x(x1)-f2x(x2)));
    e3=(fabs((x3-x2)/x3))*100;
    printf("x3=%f\n error=%f\n",x3,e3);
    x4 = x3 -((f2x(x3)-(x2-x3))/(f2x(x2)-f2x(x3)));
    e4=(fabs((x4-x3)/x4))*100;
    printf("x4=%f\n error=%f\n",x4,e4 );
    x5 = x4 -((f2x(x4)-(x3-x4))/(f2x(x3)-f2x(x4)));
    e5=(fabs((x5-x4)/x5))*100;
    printf("x5=%f\n error=%f\n",x5,e5 );
    break;
    case 4:
    printf("**SECANTE EXPONENCIAL** \n");
    printf("valor inicial x-1=.5   x0=-.3\n");
    x0 =-.3;
    xm1=.5;
    x1 = x0 -((fx(x0)-(xm1-x0))/(fx(xm1)-fx(x0)));
    e1=(fabs((x1-x0)/x1))*100;
    printf("x1=%f\n error=%f\n",x1,e1 );
    x2 = x1 -((fx(x1)-(x0-x1))/(fx(x0)-fx(x1)));
    e2=(fabs((x2-x1)/x2))*100;
    printf("x2=%f\n error=%f\n",x2,e2 );
    x3 = x2 -((fx(x2)-(x1-x2))/(fx(x1)-fx(x2)));
    e3=(fabs((x3-x2)/x3))*100;
    printf("x3=%f\n error=%f\n",x3,e3);
    x4 = x3 -((fx(x3)-(x2-x3))/(fx(x2)-fx(x3)));
    e4=(fabs((x4-x3)/x4))*100;
    printf("x4=%f\n error=%f\n",x4,e4 );
    x5 = x4 -((fx(x4)-(x3-x4))/(fx(x3)-fx(x4)));
    e5=(fabs((x5-x4)/x5))*100;
    printf("x5=%f\n error=%f\n",x5,e5 );
    break;
  }
return 0;
}

float fx(float x){
    float y;
    y = (8*sin(x)*exp(-x))-1;
    return y;
  }
float dfx(float x){
    float y;
    y = (8*exp(-x)*cos(x))-(8*exp(-x)*sin(x));
    return y;
  }
float f2x(float x){
    float y;
    y = (2*x*x*x)-(11*x*x)+(17.7*x)-5;
    return y;
  }
float d2fx(float x){
    float y;
    y =(6*x*x)-(22*x)+17.7;
    return y;
  }
