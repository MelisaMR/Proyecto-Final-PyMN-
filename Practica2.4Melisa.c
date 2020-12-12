#include <stdio.h>

float gm;
int ec;
float tfi;

int main() {

  printf("Ingrese su estado civil\n");
  printf("Soltero===>1\n");
  printf("Casado====>2\n");
  scanf("%d",&ec);
  printf("ingrese su ganancia mensual\n");
  scanf("%f",&gm );

if (ec==1) {
  if (gm<=32000) {
    printf("Usted pagará un 10 de impuestos");
    tfi=gm*.10;

  } else {
    printf("Usted pagará un 25 de impuestos");
      tfi=gm*.25;

  }
} else {
  if (gm<=64000) {
    printf("Usted pagará un 10 de impuestos");
      tfi=gm*.10;
  } else {
    printf("Usted pagará un 25 de impuestos");
      tfi=gm*.25;
  }

}
printf("\nSu tarifa final de impuestos es de $ %.2f\n",tfi );
  return 0;
}
