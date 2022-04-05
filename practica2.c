//Escribir un programa que calcule la cantidad de dinero que uno tendría al cabo de t años invirtiendo P pesos con una tasa de interés anual r. La fórmula que hay que aplicar es Pert. Usar la función exp() de math.h para calcular ex.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double p = atof(argv[1]);
  double t = atof(argv[2]);
  double r = atof(argv[3]);
  double quantity = p * exp(r*t);
  printf("La cantidad es de %.2f \n", quantity);
  return 0;
}
