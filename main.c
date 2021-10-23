#include "sorting.c"

int main(){
    int escolha = 0;
    printf("Escolha um metodo: \n1- Fibonacci Recursivo\n2- Bubble Sort\n3- Quick Sort\n4- Radix Sort\n");
    scanf("%d",&escolha);
    int resposta,i;
    long long int *arr;

    if(escolha == 1){
        resposta=10;
        for (i = 1; i <= resposta; i++) {
            printf("%lld ", fibonaccirecursivo(i));
        }
        printf("\n");
        
    }
    else if(escolha == 2){
        resposta=1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        bubbleSort(arr, resposta);
        printArray(arr, resposta);
        free(arr);
    }
    else if(escolha == 3){
        resposta=1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        quickSort(arr, resposta);
        printArray(arr, resposta);

    }
    else if(escolha == 4){
        resposta=1000;
        arr = (long long int *)malloc(sizeof(long long int) * resposta);
        random_array(arr, resposta);
        radixSort(arr, resposta);
        printArray(arr, resposta);

    }
    else{
        printf("Insira um valor válido!! \n");
    }
    
  
}