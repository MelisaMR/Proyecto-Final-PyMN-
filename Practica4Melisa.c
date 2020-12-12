#include <stdio.h>
#include <time.h>
void cuatrouno();
void cuatrodos();
void cuatrotres();
void cuatrocuatro();
void cuatrocinco();
void cuatroseis();
void cuatrosiete();
void cuatroocho();
int choice;
int main(){
  printf("Escoja la funcion a ejecutar\n (1-8)\n ");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
    cuatrouno();
    break;
    case 2:
    cuatrodos();
    break;
    case 3:
    cuatrotres();
    break;
    case 4:
    cuatrocuatro();
    break;
    case 5:
    cuatrocinco();
    break;
    case 6:
    cuatroseis();
    break;
    case 7:
    cuatrosiete();
    break;
    case 8:
    cuatroocho();
    break;
  }
    return 0;
}
void cuatrouno(){
  int numveca[10];
  int numvecb[10];
  int i;
  for(i=0;i<10;i++){
    printf("Escriba la posicion %d del vector 1\n",i+1);
    scanf ("%d",&numveca[i]);
  }
  for(i=0;i<10;i++){
    printf("Escriba la posicion %d del vector 2\n",i+1);
    scanf ("%d",&numvecb[i]);
  }
  for(i=0;i<10;i++){
    printf("posicion %d del vector 1 ==>%d\n",i,numveca[i]);
  }
  for(i=0;i<10;i++){
    printf("posicion %d del vector 2 ==>%d\n",i,numvecb[i]);
  }
}
void cuatrodos(){
  int numveca[10];
  int numvecb[10];
  int i;
  srand(time(0));
  for(i=0;i<10;i++){
      numveca[i]=rand();
  }
  for(i=0;i<10;i++){
    numvecb[i]=rand();
  }
  for(i=0;i<10;i++){
    printf("posicion %d del vector 1 ==>%d\n",i,numveca[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("posicion %d del vector 2 ==>%d\n",i,numvecb[i]);
  }
}
void cuatrotres(){
int numveca[10];
int numvecb[10];
float vectc[10];
int i;
for(i=0;i<10;i++){
  printf("Escriba la posicion %d del vector 1\n",i+1);
  scanf ("%d",&numveca[i]);
}
printf("\n");
for(i=0;i<10;i++){
  printf("Escriba la posicion %d del vector 2\n",i+1);
  scanf ("%d",&numvecb[i]);
}
printf("Suma:\n");
     for(i=0;i<10;i++){
      vectc[i]=numveca[i]+numvecb[i];
    printf("posicion %d -->%2.0f\n",i,vectc[i]);
    }
}
void cuatrocuatro(){
  int arreglo[5];
  int i;
  int sumaarr;
  sumaarr=0;
      for (i=0;i<5;i++){
              printf("Ingresa el  %d ° para el arreglo\n",i+1);
              scanf("%d",&arreglo[i]);
              sumaarr = sumaarr+arreglo[i];
          }
          printf("La suma  es de %d\n",sumaarr);
  }
void cuatrocinco(){
  int matriz [3][3];
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Escriba el valor de la posicion [%d][%d]\n",i+1,j+1);
      scanf("%d",&matriz [i][j]);
    }
  }
}
void cuatroseis(){
    int matriz[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=rand();
          printf("%d  \t",matriz[i][j]);
        }
    }
  }
void cuatrosiete(){
  int c, d, primera[3][3], segunda[3][3], suma[3][3];
  printf("Escriba los elementos de la primera matriz\n");
     for (c = 0; c <3; c++){
        for (d = 0; d <3; d++){
          printf("Escriba el valor de la posicion [%d][%d]\n",c+1,d+1);
          scanf("%d", &primera[c][d]);
        }
     }
     printf("Escriba los elementos de la segunda matriz\n");
     for (c = 0; c <3; c++){
        for (d = 0 ; d <3; d++){
         printf("Escriba el valor de la posicion [%d][%d]\n",c+1,d+1);
        scanf("%d", &segunda[c][d]);
        }
     }
     printf("Suma de las matrices:-\n");
     for (c = 0; c <3; c++) {
        for (d = 0 ; d <3; d++) {
           suma[c][d] = primera[c][d] + segunda[c][d];
           printf("%d\t", suma[c][d]);
        }
        printf("\n");
     }
  }
void cuatroocho(){
  int m, n, p, q, c, d, k, sum = 0;
  int MatA[10][10], MatB[10][10], mult[10][10];
  printf("Introduzca el numero de filas de la primera matriz\n");
  scanf("%d", &m);
  printf("Introduzca el numero de columnas de la primera matriz\n");
  scanf("%d",&n);
  printf("Escriba los elementos de la primera matriz\n");
  for (c = 0; c < m; c++){
    for (d = 0; d < n; d++){
      printf("Escriba el valor de la posicion [%d][%d]\n",c+1,d+1);
      scanf("%d", &MatA[c][d]);
    }
  }
  printf("Introduzca el numero de filas de la segunda matriz\n");
  scanf("%d", &p);
  printf("Introduzca el numero de columnas de la segunda matriz\n");
  scanf("%d", &q);
  if (n != p)
    printf("E R R O R.\n");
  else
  {
    printf("Escriba los elementos de la segunda matriz\n");
    for (c = 0; c < p; c++){
      for (d = 0; d < q; d++){
      printf("Escriba el valor de la posicion [%d][%d]\n",c+1,d+1);
        scanf("%d", &MatB[c][d]);
      }
    }
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + MatA[c][k]*MatB[k][d];
        }
        mult[c][d] = sum;
        sum = 0;
      }
    }
    printf("Producto de las matrices:\n");
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", mult[c][d]);
      printf("\n");
    }
  }
  }
