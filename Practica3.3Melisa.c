#include <stdio.h>
  int i, n, f1 = 0, f2 = 1, sigTerm;
  float aureo;
  float x,y;

int main() {
    printf("Ingrese el numero de terminos\n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
      printf("%d \t ", f1);
      x=f1;
      y=f2;
      sigTerm = f1 + f2;
      f1 = f2;
      f2 = sigTerm;
    }

aureo=y/x;
printf("\nAproximacion del numero aureo %1.5f \n",aureo );

    return 0;
}
