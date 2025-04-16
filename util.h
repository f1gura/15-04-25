#include <stdio.h>

int diametro(void) {
  
    printf("digite o raio: ");
    double x;
    scanf("%d",x);

  return 2 * x;
}



int circunferencia(void) {
  
    printf("digite o raio: ");
    double x;
    scanf("%d",x);

  return  3.14 * 2 * x;
}


int area(void) {
  
    printf("digite o raio: ");
    double x;
    scanf("%d",x);

  return  3.14 * (x * x);
}