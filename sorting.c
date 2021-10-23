#include "sorting.h"

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
long long int fibonaccirecursivo(int n) {
  long long int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = fibonaccirecursivo(n-1) + fibonaccirecursivo(n-2);
  return(x);
}
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
void particao(int left, int right, int *i, int *j, long long int *arr)
{
   *i = left;
   *j = right;
   int pivot = arr[(*i + *j) / 2]; /* obtem o pivo x */
   int aux;
   do
   {

      while (pivot > arr[*i])
      {
         (*i)++;
      }

      while (pivot < arr[*j])
      {
         (*j)--;
      }

      if (*i <= *j)
      {

         aux = arr[*i];
         arr[*i] = arr[*j];
         arr[*j] = aux;
         (*i)++;
         (*j)--;
      }
   } while (*i <= *j);
}
void ordena(int left, int right, long long int *arr)
{
   int i, j;
   particao(left, right, &i, &j, arr);
   if (left < j)
      ordena(left, j, arr);
   if (i < right)
      ordena(i, right, arr);

}
void quickSort(long long int *arr, int n)
{
   ordena(0, n - 1, arr);
}
int getMax(long long int *arr, int n)
{
    long long int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    return mx;
}
void countSort(long long int *arr, int n, int exp)
{
    int *output;
    output = (int *)malloc(sizeof(long long int) * n);
    int i, count[10] = {0};
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixSort(long long int *arr, int n)
{
    // Find the maximum number to know number of digits
    long long int m = getMax(arr, n);
    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // wgere i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
    }
}