#include <stdio.h>
#include <math.h>
int num;
int c;
int r;
int i;

int main() {
  printf("escriba un numero\n");
  scanf("%d",&num);
do {
  c=num/2;
  r=num%2;
  printf("%d\t",r);
  num=c;
} while(c=!0);
  return 0;
}
