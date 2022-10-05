#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i);

int main(){

    int n, i;
    
    printf("\nEntre com o tamanho da sequencia de Fibonacci: ");
    scanf("%d", &n);
    
    for(i=1; i<n+1; i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

int fibonacci(int i){
    if(i == 1 || i == 2){
        return 1;
    } else{
        return fibonacci(i-1) + fibonacci(i-2);
    }
}
