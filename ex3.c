#include <stdio.h>
#include "util.h"

int main() {
  double raio;
  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);

  printf("Diametro: %.2lf\n", diametro(raio));
  printf("Circunferencia: %.2lf\n", circunferencia(raio));
  printf("Area: %.2lf\n", area(raio));

  return 0;
}
