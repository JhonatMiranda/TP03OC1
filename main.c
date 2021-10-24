#include "sorting.c"

int main()
{
    int escolha = 0;
    printf("\n1- Fibonacci Recursivo\n2- Bubble Sort\n3- Quick Sort\n4- Radix Sort\n5- Fibonacci Recursivo Otimizado\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);
    printf("\n");
    int resposta, i;
    long long int *arr;

    if (escolha == 1)
    {
        resposta = 50;
        for (i = 1; i <= resposta; i++)
        {
            printf("%lld ", fibonaccirecursivo(i));
        }
        printf("\n");
    }
    else if (escolha == 2)
    {
        resposta = 1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        bubbleSort(arr, resposta);
        printArray(arr, resposta);
        free(arr);
    }
    else if (escolha == 3)
    {
        resposta = 1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        quickSort(arr, resposta);
        printArray(arr, resposta);
        printf("\n");
        free(arr);
    }
    else if (escolha == 4)
    {
        resposta = 1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        radixSort(arr, resposta);
        printArray(arr, resposta);
        printf("\n");
        free(arr);
    }
    else if (escolha == 5)
    {
        resposta = 50;
        for (int i = 0; i < resposta; i++)
            fibOtimizado(i, 1, 0);
        printf("\n");
    }
    else
    {
        printf("Insira um valor válido!! \n");
    }
}