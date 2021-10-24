#ifndef SORTING_h
#define SORTING_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funções gerais
void printArray(long long int *arr, int n);
void random_array(long long int *arr, int resposta);

//FibRecursivo
long long int fibonaccirecursivo(int n);

//BubbleSort
void bubbleSort(long long int *vetor, int n);

//QuickSort
void particao(int left, int right, int *i, int *j, long long int *arr);
void ordena(int left, int right, long long int *arr);
void quickSort(long long int *arr, int n);

//RadixSort
int getMax(long long int *arr, int n);
void countSort(long long int *arr, int n, int exp);
void radixSort(long long int *arr, int n);

//FibRecursivo Otimizado
long long int fibOtimizado(long long int contaPassos, long long int ultimo, long long int penultimo);

#endif