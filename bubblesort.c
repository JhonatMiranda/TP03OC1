#include "sorting.h"

void bubbleSort(long long int *vetor, int n)
{
    int k, j, aux;

    for (k = 1; k < n; k++)
    {

        for (j = 0; j < n - 1; j++)
        {

            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
void random_array(long long int *arr, int resposta)
{
    int i;
    for (i = 0; i < resposta; i++)
    {
        arr[i] = rand() % 101;
    }
}

void printArray(long long int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%lld ", arr[i]);
    printf("\n");
}

int main()
{
    long long int *arr;
    int resposta = 1000;
    arr = (long long int *)malloc(sizeof(long long int) * resposta);
    random_array(arr, resposta);
    bubbleSort(arr, resposta);

    printArray(arr, resposta);
}