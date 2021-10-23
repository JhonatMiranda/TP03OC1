#include <stdio.h>
#include <stdlib.h>

int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber){
    
    int nthNum = 0;
    
   if (remainingSteps > 0) {
        
        nthNum = previousNumber + previousPreviousNumber;
        previousPreviousNumber = previousNumber;
        previousNumber = nthNum;
        remainingSteps--;
        
        return recursiveValueFibonacci(remainingSteps, previousNumber, previousPreviousNumber);
        
    }
    printf("%d ", previousNumber);
    return previousNumber;
    
    
}

int main() {
    int n = 7; // n is the nth digit in the series.
    for (int i = 0; i < n; i++) {
        recursiveValueFibonacci(i, 1, 0);
    }
    //printf("%d", recursiveValueFibonacci(n,1,0));
    
    return 0;
}