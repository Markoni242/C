#include <stdio.h>
#include <stdlib.h>

//Exercicio de soma onde é feito a soma entre dois double e um int

int main(int argc, char *argv[]) {

  int a = 3;
  double b = 4.5;
  double c = 5.25;
  float soma;

  soma = a + b + c;

  printf("The sum of a, b, and c is %f", soma);
  return 0;
}
