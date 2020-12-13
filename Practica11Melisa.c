#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; //Matriz de coeficientes
float b[3] = {27,-61.5,-21.5}; //Terminos independientes
float x_in1,x_in2,x_in3; // Valores iniciales Gauss Seidel
float x_it1,x_it2,x_it3; // Valores que se iterarán Gauss Seidel
float xin1,xin2,xin3; // Valores iniciales Jacobi
float xit1,xit2,xit3; // Valores que se iterarán Jacobi
float ErJ,ErGS;//error relativo
int i,j;
int main(){
  printf("Gauss-Seidel-->1\nJacobi-------->2\n");
  scanf("%d",&i );
  switch (i) {
    case 1:  // Gauss Seidel
   for(j=0;j<5;j++){
       if(j==0){ // x_1 x_2 y x_3 son cero en la iteracion 1
           x_it1 = b[0]/A[0][0];
           x_it2 = ((-A[1][0]*x_it1)+b[1])/A[1][1];
           x_it3 = ((-A[2][0]*x_it1)-(A[2][1]*x_it2)+b[2])/A[2][2];
           printf("x1 en la iteracion 1 = %f\n",x_it1);
           printf("x2 en la iteracion 1 = %f\n",x_it2);
           printf("x3 en la iteracion 1 = %f\n",x_it3);
       }
       else {
         x_in1=x_it1;
         x_it1 = ((-A[0][1]*x_it2)-(A[0][2]*x_it3)+b[0])/A[0][0];
         ErGS=fabs((x_it1-x_in1)/(x_it1))*100;
         x_in2=x_it2;
         x_it2 = ((-A[1][0]*x_it1)-(A[1][2]*x_it3)+b[1])/A[1][1];
         ErGS=fabs((x_it2-x_in2)/(x_it2))*100;
         x_in3=x_it3;
         x_it3 = ((-A[2][0]*x_it1)-(A[2][1]*x_it2)+b[2])/A[2][2];
         ErGS=fabs((x_it3-x_in3)/(x_it3))*100;
         printf("x1 en la iteracion %d = %f\nerror= %f %%\n",j+1,x_it1,ErGS);
         printf("x2 en la iteracion %d = %f\nerror= %f %%\n",j+1,x_it2,ErGS);
         printf("x3 en la iteracion %d = %f\nerror= %f %%\n",j+1,x_it3,ErGS);
           }
       }
    break;
    case 2:// Jacobi
    for(j=0;j<5;j++){
      if(j==0){ // x_1 x_2 y x_3 son cero en la iteracion 1
        xit1 = b[0]/A[0][0];
        xit2 = b[1]/A[1][1];
        xit3 = b[2]/A[2][2];
        printf("Metodo de Jacobi\n" );
        printf("x1 en la iteracion 1 = %f\n",xit1);
        printf("x2 en la iteracion 1 = %f\n",xit2);
        printf("x3 en la iteracion 1 = %f\n",xit3);
    }
    else {
        xin1 = xit1;
        xit1 = ((-A[0][1]*xit2)-(A[0][2]*xit3)+b[0])/A[0][0];
        ErJ=fabs((xit1-xin1)/(xit1))*100;
        xin2 = xit2;
        xit2 = ((-A[1][0]*xin1)-(A[1][2]*xit3)+b[1])/A[1][1];
        ErJ=fabs((xit2-xin2)/(xit2))*100;
        xin3 = xit3;
        xit3 = ((-A[2][0]*xin1)-(A[2][1]*xin2)+b[2])/A[2][2];
        ErJ=fabs((xit3-xin3)/(xit3))*100;
        printf("x1 en la iteracion %d = %f \nerror= %f %%\n",j+1,xit1,ErJ);
        printf("x2 en la iteracion %d = %f \nerror= %f %%\n",j+1,xit2,ErJ);
        printf("x3 en la iteracion %d = %f \nerror= %f %%\n",j+1,xit3,ErJ);
        }
    }
  }
}
