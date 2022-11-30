
#include "fibonacci.h"

int main(){

    int n, i;
    double time_taken;
    clock_t start, end;
    
    printf("\nEntre com o tamanho da sequencia de Fibonacci: ");
    scanf("%d", &n);
    
    start = clock();
    for(i=1; i<n+1; i++){
        printf("%d ", fibonacci(i));
    }
    end = clock();
    printf("\n");
    time_taken = (1.0 * (end-start)) / (1.0 * CLOCKS_PER_SEC);
    printf("\n tempo de execução: %f sec\n\n", time_taken);
    return 0;
}


