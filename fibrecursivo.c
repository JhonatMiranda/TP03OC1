#include "fibrecursivo.h"
// Programa que recebe um inteiro n e calcula os
// n primeiros termos da sequencia de Fibonacci
// (usando funcao recursiva).

#include <stdio.h>

// Funcao recursiva que recebe um inteiro n >= 1
// devolve o n-esimo termo da sequencia de Fibonacci.

int fibonaccirecursivo(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = fibonaccirecursivo(n-1) + fibonaccirecursivo(n-2);
  return(x);
}

// Funcao principal.

// int main() {
//   int n,i;
  
//   printf("Digite o numero de termos da sequencia: ");
//   scanf("%d", &n);
  
//   while(n <= 0) {
//     printf("Numero incorreto. Digite o numero de termos da sequencia: ");
//     scanf("%d", &n);
//   }
  
//   // Para cada i (de 1 a n), calcula e imprime o
//   // i-esimo termo da sequencia de Fibonacci.
  
//   for (i = 1; i <= n; i++) {
//     printf("%d ", fibonacci(i));
//   }
//   printf("\n");
//   return(0);
// }