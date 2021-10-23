#include <stdio.h>
#include <stdlib.h>

void printArray(long long int *arr, int n);
void random_array(long long int *arr, int resposta);
long long int fibonaccirecursivo(int n);
void bubbleSort(long long int *vetor, int n);
void particao(int left, int right, int *i, int *j, long long int *arr);
void ordena(int left, int right, long long int *arr);
void quickSort(long long int *arr, int n);
int getMax(long long int *arr, int n);
void countSort(long long int *arr, int n, int exp);
void radixSort(long long int *arr, int n);