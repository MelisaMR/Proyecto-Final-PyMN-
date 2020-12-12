#include <stdio.h>

int bolsas;
float total; //total a pagar
int departamento;
float gp; //gasto en Perfumeria 20
float gs; //gasto en Salchichoneria 40
float gc; //gasto en Carniceria 20
float gl; //gasto en Limpieza 35
float tp; //total Perfumeria
float ts;
float tc;
float tl;
float tb; //total por las bolsas
int od; //respuesta a que si compro en otro departamento

int main() {

printf("Ingrese el departamento en el que realizó compra(s)\n");
printf("Perfumeria========>1\n");
printf("Salchichoneria====>2\n");
printf("Carniceria========>3\nLimpieza==========>4\n");
scanf("%d",&departamento);
switch (departamento) {
  case 1:
  printf("Ingrese el monto gastado en este departamento\n");
  scanf("%f",&gp);
  tp=gp*.8;
  printf("¿Compro en otro departamento?\nsi==>1\nno==>0\n");
  scanf("%d",&od);
  if (od==1) {
    printf("¿Cual?\n");
    printf("Salchichoneria====>2\n");
    printf("Carniceria========>3\nLimpieza==========>4\n");
    scanf("%d",&departamento);
  } else {
    break;
  }
  case 2:
  printf("Ingrese el monto gastado en este departamento\n");
  scanf("%f",&gs);
  ts=gs*.6;
  printf("¿Compro en otro departamento?\nsi==>1\nno==>0\n");
  scanf("%d",&od);
  if (od==1) {
    printf("¿Cual?\n");
    printf("Perfumeria========>1\n");
    printf("Carniceria========>3\nLimpieza==========>4\n");
    scanf("%d",&departamento);
  } else {
    break;

  }
  case 3:
  printf("Ingrese el monto gastado en este departamento\n");
  scanf("%f",&gc);
  tc=gc*.8;
  printf("¿Compro en otro departamento?\nsi==>1\nno==>0\n");
  scanf("%d",&od);
  if (od==1) {
    printf("¿Cual?\n");
    printf("Perfumeria========>1\n");
    printf("Salchichoneria====>2\nLimpieza==========>4\n");
    scanf("%d",&departamento);
  } else {
    break;
  }
  case 4:
  printf("Ingrese el monto gastado en este departamento\n");
  scanf("%f",&gl);
  tl=gl*.65;
  printf("¿Compro en otro departamento?\nsi==>1\nno==>0\n");
  scanf("%d",&od);
  if (od==1) {
    printf("¿Cual?\n");
    printf("Perfumeria========>1\n");
    printf("Salchichoneria====>2\nCarniceria========>3\n");
    scanf("%d",&departamento);
  } else {
    break;
  }
}
printf("Ingrese el numero de bolsas que fueron requeridas\n");
scanf("%d",&bolsas);
tb=bolsas*.10;
total=tl+tc+ts+tp+tb;
printf("Su total es de $ %.2f",total );
  return 0;
}
//si ingreso departamentos en orden, si funciona. Pero si se empieza con el 4to, ya no agrega otro
