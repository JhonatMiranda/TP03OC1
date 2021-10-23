#include "sorting.h"

int main(){
    int escolha = 0;
    printf("Escolha um metodo: \n1- Fibonacci Recursivo\n2- Bubble Sort\n3- Quick Sort\n4- Radix Sort");
    scanf("%d",escolha);

    switch (escolha)
    {
    case 1:
        int tamanho,i;
        tamanho=50;
        for (i = 1; i <= tamanho; i++) {
            printf("%lld ", fibonaccirecursivo(i));
        }
            printf("\n");
        break;
    case 2:
        long long int *arr;
        int resposta = 1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        bubbleSort(arr, resposta);
        printArray(arr, resposta);
        break;
    case 3:
        long long int *arr;
        int resposta = 1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        quickSort(arr, resposta);
        printArray(arr, resposta);
        break;
    case 4:
        long long int *arr;
        int resposta = 1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        radixSort(arr, resposta);
        printArray(arr, resposta);
        break;
    
    default:
        break;
    }
}