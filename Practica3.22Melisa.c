#include <stdio.h>
#include <math.h>
int num;
int c4;
int c1;
int c2;
int c3;

int main() {
printf("ingrese el codigo numero por numero\n");
scanf("%d",&c1 );
scanf("%d",&c2 );
scanf("%d",&c3 );
scanf("%d",&c4 );
if (c1=!c2) {
  printf("codigo no valido");
} else {
  if (c2=!c3) {
    printf("codigo no valido");
  } else {
    if (c3=!c4) {
      printf("codigo no valido");
    } else {
      printf("codigo valido");
    }
  }
}
  return 0;
}
